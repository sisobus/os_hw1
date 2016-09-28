/*
 * pintos data structure header
 */
#include "bitmap.h"
#include "hash.h"
#include "list.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>
/*
 * command menu
 * 0, 1, ..., 53
 */
typedef enum _COMMAND_MENU {
    HELP,
    CREATE_LIST,
    CREATE_HASHTABLE,
    CREATE_BITMAP,
    DELETE,
    DUMPDATA,
    QUIT,
    COMMAND,
    LIST_INSERT,
    LIST_SPLICE,
    LIST_PUSH,
    LIST_PUSH_FRONT,
    LIST_PUSH_BACK,
    LIST_REMOVE,
    LIST_POP_FRONT,
    LIST_POP_BACK,
    LIST_FRONT,
    LIST_BACK,
    LIST_SIZE,
    LIST_EMPTY,
    LIST_REVERSE,
    LIST_SORT,
    LIST_INSERT_ORDERED,
    LIST_UNIQUE,
    LIST_MAX,
    LIST_MIN,
    LIST_SWAP,
    LIST_SHUFFLE,
    HASH_INSERT,
    HASH_REPLACE,
    HASH_FIND,
    HASH_DELETE,
    HASH_CLEAR,
    HASH_SIZE,
    HASH_EMPTY,
    HASH_APPLY,
    HASH_INT_2,
    BITMAP_SIZE,
    BITMAP_SET,
    BITMAP_MARK,
    BITMAP_RESET,
    BITMAP_FLIP,
    BITMAP_TEST,
    BITMAP_SET_ALL,
    BITMAP_SET_MULTIPLE,
    BITMAP_COUNT,
    BITMAP_CONTAINS,
    BITMAP_ANY,
    BITMAP_NONE,
    BITMAP_ALL,
    BITMAP_SCAN,
    BITMAP_SCAN_AND_FLIP,
    BITMAP_DUMP,
    BITMAP_EXPAND,
    NOT_FOUND
} COMMAND_MENU;
/*
 * command argument string list
 * total 46
 */
char command_argument[46][256]={"list_insert","list_splice","list_push","list_push_front","list_push_back","list_remove","list_pop_front","list_pop_back","list_front","list_back","list_size","list_empty","list_reverse","list_sort","list_insert_ordered","list_unique","list_max","list_min","list_swap","list_shuffle","hash_insert","hash_replace","hash_find","hash_delete","hash_clear","hash_size","hash_empty","hash_apply","hash_int_2","bitmap_size","bitmap_set","bitmap_mark","bitmap_reset","bitmap_flip","bitmap_test","bitmap_set_all","bitmap_set_multiple","bitmap_count","bitmap_contains","bitmap_any","bitmap_none","bitmap_all","bitmap_scan","bitmap_scan_and_flip","bitmap_dump","bitmap_expand"};

/*
 * ERROR_NUMBER
 * -2147483648, -2147483647, ...
 * error check : something > SUCCESS
 */
typedef enum _ERROR_NUMBER {
    SUCCESS = INT_MIN,
    END_OR_PROGRAM,
    COMMAND_NOT_FOUND,
    LIST_IS_FULL,
    LIST_IS_NOT_EXISTS,
    LIST_RANGE_EXCEED,
    HASH_IS_FULL,
    HASH_IS_NOT_EXISTS,
    BITMAP_IS_NOT_EXISTS,
    NUMBER_OF_ARGUMENT_ERROR,
    DELETE_ERROR_NOT_EXISTS
} ERROR_NUMBER;

/*
 * custom define
 */
#ifndef false
#define false 0
#endif
#ifndef true
#define !(false)
#endif
#define MAX_LIST_SIZE 10
#define MAX_HASH_SIZE 10
#define MAX_BITMAP_SIZE 10
#define MAX_STRUCT_NAME_SIZE 128
#define MAX_BUFFER_SIZE 1024
#define NUMBER_OF_COMMAND_ARGUMENT 46
#define init_tok(buf) strtok(buf," ")
#define next_tok() strtok(NULL," ")
/*
 * custom structure
 */
typedef struct _List {
    struct list list;
    char name[MAX_STRUCT_NAME_SIZE];
} List;
typedef struct _Hash {
    struct hash hash;
    char name[MAX_STRUCT_NAME_SIZE];
} Hash;
typedef struct _Bitmap {
    struct bitmap *bitmap;
    char name[MAX_STRUCT_NAME_SIZE];
} Bitmap;
List lists[MAX_STRUCT_NAME_SIZE];
Hash hashs[MAX_STRUCT_NAME_SIZE];
Bitmap bitmaps[MAX_STRUCT_NAME_SIZE];
typedef struct _List_struct {
    struct list_elem elem;
    int value;
} List_struct;
typedef struct _Hash_struct {
    struct hash_elem hash_elem;
    int value;
} Hash_struct;


/*
 * custom hash function
 */
unsigned hash_hash_function(const struct hash_elem *p,void *aux) ;
bool hash_less_function(const struct hash_elem *a,const struct hash_elem *b,void *aux);
bool list_less_function(const struct list_elem *a,const struct list_elem *b,void *aux);
/*
 * custom function
 */
void help();
void print_error_message(ERROR_NUMBER e);
int get_argument_count(char *buf);
COMMAND_MENU get_command(char *buf);

List *get_list(char *buf);
Hash *get_hash(char *buf);
Bitmap *get_bitmap(char *buf);

int str2int(char *s) {
    int ret;
    sscanf(s,"%d",&ret);
    return ret;
}

/*
 * test function
 */
ERROR_NUMBER create_list(char *buf);
ERROR_NUMBER create_hash(char *buf);
ERROR_NUMBER create_bitmap(char *buf);
ERROR_NUMBER struct_delete(char *buf);
ERROR_NUMBER dumpdata(char *buf);
ERROR_NUMBER quit(char *buf);
ERROR_NUMBER test_list_insert(char* buf);
ERROR_NUMBER test_list_splice(char* buf);
ERROR_NUMBER test_list_push(char* buf);
ERROR_NUMBER test_list_push_front(char* buf);
ERROR_NUMBER test_list_push_back(char* buf);
ERROR_NUMBER test_list_remove(char* buf);
ERROR_NUMBER test_list_pop_front(char* buf);
ERROR_NUMBER test_list_pop_back(char* buf);
ERROR_NUMBER test_list_front(char* buf);
ERROR_NUMBER test_list_back(char* buf);
ERROR_NUMBER test_list_size(char* buf);
ERROR_NUMBER test_list_empty(char* buf);
ERROR_NUMBER test_list_reverse(char* buf);
ERROR_NUMBER test_list_sort(char* buf);
ERROR_NUMBER test_list_insert_ordered(char* buf);
ERROR_NUMBER test_list_unique(char* buf);
ERROR_NUMBER test_list_max(char* buf);
ERROR_NUMBER test_list_min(char* buf);
ERROR_NUMBER test_list_swap(char* buf);
ERROR_NUMBER test_list_shuffle(char* buf);
ERROR_NUMBER test_hash_insert(char* buf);
ERROR_NUMBER test_hash_replace(char* buf);
ERROR_NUMBER test_hash_find(char* buf);
ERROR_NUMBER test_hash_delete(char* buf);
ERROR_NUMBER test_hash_clear(char* buf);
ERROR_NUMBER test_hash_size(char* buf);
ERROR_NUMBER test_hash_empty(char* buf);
ERROR_NUMBER test_hash_apply(char* buf);
ERROR_NUMBER test_hash_int_2(char* buf);
ERROR_NUMBER test_bitmap_size(char* buf);
ERROR_NUMBER test_bitmap_set(char* buf);
ERROR_NUMBER test_bitmap_mark(char* buf);
ERROR_NUMBER test_bitmap_reset(char* buf);
ERROR_NUMBER test_bitmap_flip(char* buf);
ERROR_NUMBER test_bitmap_test(char* buf);
ERROR_NUMBER test_bitmap_set_all(char* buf);
ERROR_NUMBER test_bitmap_set_multiple(char* buf);
ERROR_NUMBER test_bitmap_count(char* buf);
ERROR_NUMBER test_bitmap_contains(char* buf);
ERROR_NUMBER test_bitmap_any(char* buf);
ERROR_NUMBER test_bitmap_none(char* buf);
ERROR_NUMBER test_bitmap_all(char* buf);
ERROR_NUMBER test_bitmap_scan(char* buf);
ERROR_NUMBER test_bitmap_scan_and_flip(char* buf);
ERROR_NUMBER test_bitmap_dump(char* buf);
ERROR_NUMBER test_bitmap_expand(char* buf);

/*
 * 아쉬운 점
 * command argument 의 개수를 반영하면
 * 더욱 안정적인 프로그램이 될텐데 커맨드가 너무 많아서 패쓰
 */
