#include "a.h"

int main(int argc,char* argv[]) {
    char buf[MAX_BUFFER_SIZE]={};
    ERROR_NUMBER e;
    while ( true ) {
        fgets(buf,MAX_BUFFER_SIZE,stdin);
        while ( buf[strlen(buf)-1] == '\n' || buf[strlen(buf)-1] == '\r' ) 
            buf[strlen(buf)-1] = '\0';
        COMMAND_MENU cmd = get_command(buf);
        if ( cmd == HELP ) {
            help();
        } else if ( cmd == CREATE_LIST ) {
            if ( (e=create_list(buf)) > SUCCESS ) 
                print_error_message(e);
        } else if ( cmd == CREATE_HASHTABLE ) {
            if ( (e=create_hash(buf)) > SUCCESS ) 
                print_error_message(e);
        } else if ( cmd == CREATE_BITMAP ) {
            if ( (e=create_bitmap(buf)) > SUCCESS ) 
                print_error_message(e);
        } else if ( cmd == DELETE ) {
            if ( (e=struct_delete(buf)) > SUCCESS ) 
                print_error_message(e);
        } else if ( cmd == DUMPDATA ) {
            if ( (e=dumpdata(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == QUIT ) {
            return quit(buf);
        } else if ( cmd == COMMAND ) {
            print_error_message(COMMAND_NOT_FOUND);
        } else if ( cmd == LIST_INSERT ) {
            if ( (e=test_list_insert(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_SPLICE ) {
            if ( (e=test_list_splice(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_PUSH ) {
            if ( (e=test_list_push(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_PUSH_FRONT ) {
            if ( (e=test_list_push_front(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_PUSH_BACK ) {
            if ( (e=test_list_push_back(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_REMOVE ) {
            if ( (e=test_list_remove(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_POP_FRONT ) {
            if ( (e=test_list_pop_front(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_POP_BACK ) {
            if ( (e=test_list_pop_back(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_FRONT ) {
            if ( (e=test_list_front(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_BACK ) {
            if ( (e=test_list_back(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_SIZE ) {
            if ( (e=test_list_size(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_EMPTY ) {
            if ( (e=test_list_empty(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_REVERSE ) {
            if ( (e=test_list_reverse(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_SORT ) {
            if ( (e=test_list_sort(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_INSERT_ORDERED ) {
            if ( (e=test_list_insert_ordered(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_UNIQUE ) {
            if ( (e=test_list_unique(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_MAX ) {
            if ( (e=test_list_max(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_MIN ) {
            if ( (e=test_list_min(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_SWAP ) {
            if ( (e=test_list_swap(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == LIST_SHUFFLE ) {
            if ( (e=test_list_shuffle(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_INSERT ) {
            if ( (e=test_hash_insert(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_REPLACE ) {
            if ( (e=test_hash_replace(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_FIND ) {
            if ( (e=test_hash_find(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_DELETE ) {
            if ( (e=test_hash_delete(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_CLEAR ) {
            if ( (e=test_hash_clear(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_SIZE ) {
            if ( (e=test_hash_size(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_EMPTY ) {
            if ( (e=test_hash_empty(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_APPLY ) {
            if ( (e=test_hash_apply(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == HASH_INT_2 ) {
            if ( (e=test_hash_int_2(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SIZE ) {
            if ( (e=test_bitmap_size(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SET ) {
            if ( (e=test_bitmap_set(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_MARK ) {
            if ( (e=test_bitmap_mark(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_RESET ) {
            if ( (e=test_bitmap_reset(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_FLIP ) {
            if ( (e=test_bitmap_flip(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_TEST ) {
            if ( (e=test_bitmap_test(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SET_ALL ) {
            if ( (e=test_bitmap_set_all(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SET_MULTIPLE ) {
            if ( (e=test_bitmap_set_multiple(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_COUNT ) {
            if ( (e=test_bitmap_count(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_CONTAINS ) {
            if ( (e=test_bitmap_contains(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_ANY ) {
            if ( (e=test_bitmap_any(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_NONE ) {
            if ( (e=test_bitmap_none(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_ALL ) {
            if ( (e=test_bitmap_all(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SCAN ) {
            if ( (e=test_bitmap_scan(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_SCAN_AND_FLIP ) {
            if ( (e=test_bitmap_scan_and_flip(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_DUMP ) {
            if ( (e=test_bitmap_dump(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == BITMAP_EXPAND ) {
            if ( (e=test_bitmap_expand(buf)) > SUCCESS )
                print_error_message(e);
        } else if ( cmd == NOT_FOUND ) {
            print_error_message(COMMAND_NOT_FOUND);
        }
    }
    return 0;
}
unsigned hash_hash_function(const struct hash_elem *p,void *aux) {
    const Hash_struct *now = hash_entry(p,Hash_struct,hash_elem);
    return hash_int(now->value);
}
bool hash_less_function(const struct hash_elem *a,const struct hash_elem *b,void *aux){
    const Hash_struct *now1 = hash_entry(a,Hash_struct,hash_elem);
    const Hash_struct *now2 = hash_entry(b,Hash_struct,hash_elem);
    return now1->value < now2->value;
}
bool list_less_function(const struct list_elem *a,const struct list_elem *b,void *aux){
    const List_struct *now1 = list_entry(a,List_struct,elem);
    const List_struct *now2 = list_entry(b,List_struct,elem);
    return now1->value < now2->value;
}
void help() {
    puts("create list <list_name>");
    puts("create hashtable <hashtable_name>");
    puts("create bitmap <bitmap_name> <bit_count>");
    puts("delete <list_name|hashtable_name|bitmap_name>");
    puts("quit");
    puts("command <list_name|hashtable_name|bitmap_name> [argument]");
}
void print_error_message(ERROR_NUMBER e) {
    if ( e == SUCCESS ) {
        puts("error: no error, success!");
    } else if ( e == END_OR_PROGRAM ) {
        puts("error: end of program");
    } else if ( e == COMMAND_NOT_FOUND ) {
        puts("error: command not found");
    } else if ( e == LIST_IS_FULL ) {
        puts("error: list is full");
    } else if ( e == LIST_IS_NOT_EXISTS ) {
        puts("error: list is not exists");
    } else if ( e == LIST_RANGE_EXCEED ) {
        puts("error: list range exceed");
    } else if ( e == HASH_IS_FULL ) {
        puts("error: hash is full");
    } else if ( e == HASH_IS_NOT_EXISTS ) {
        puts("error: hash is not exists");
    } else if ( e == BITMAP_IS_NOT_EXISTS ) {
        puts("error: bitmap is not exists");
    } else if ( e == NUMBER_OF_ARGUMENT_ERROR ) {
        puts("error: number of argument error");
    } else if ( e == DELETE_ERROR_NOT_EXISTS ) {
        puts("error: It is not exists");
    } else {
        puts("error: Unkown");
    }
}
int get_number_of_argument(char *buf) {
    char buf_for_analytics[MAX_BUFFER_SIZE];
    int cnt = 0;
    char *tok;
    strcpy(buf_for_analytics,buf);
    for ( tok = strtok(buf_for_analytics," ") ; tok ; tok = strtok(NULL," ") )
        cnt++;
    return cnt;
}
COMMAND_MENU get_command(char *buf) {
    char buf_for_analytics[MAX_BUFFER_SIZE];
    int number_of_argument = get_number_of_argument(buf);
    char *tok;
    strcpy(buf_for_analytics,buf);
    tok = strtok(buf_for_analytics," ");
    if ( !strcmp(tok,"help") ) {
        return HELP;
    } else if ( !strcmp(tok,"create") ) {
        if ( number_of_argument == 3 || number_of_argument == 4 ) {
            tok = strtok(NULL," ");
            if ( !strcmp(tok,"list") ) {
                if ( number_of_argument == 3 ) {
                    return CREATE_LIST;
                } else return NOT_FOUND;
            } else if ( !strcmp(tok,"hashtable") ) {
                if ( number_of_argument == 3 ) {
                    return CREATE_HASHTABLE;
                } else return NOT_FOUND;
            } else if ( !strcmp(tok,"bitmap") ) {
                if ( number_of_argument == 4 ) {
                    return CREATE_BITMAP;
                } else return NOT_FOUND;
            } else {
                return NOT_FOUND;
            }
        } else {
            return NOT_FOUND;
        }
    } else if ( !strcmp(tok,"delete") ) {
        if ( number_of_argument == 2 ) {
            return DELETE;
        } else {
            return NOT_FOUND;
        }
    } else if ( !strcmp(tok,"dumpdata") ) {
        if ( number_of_argument == 2 ) {
            return DUMPDATA;
        } else {
            return NOT_FOUND;
        }
    } else if ( !strcmp(tok,"quit") ) {
        return QUIT;
    } else {
        int i;
        for ( i = 0 ; i < NUMBER_OF_COMMAND_ARGUMENT ; i++ ) 
            if ( !strcmp(tok,command_argument[i]) ) 
                return i+8; // List insert : 8
        return NOT_FOUND;
    }
}

List *get_list(char *buf) {
    int i;
    if ( !buf ) return NULL;
    for ( i = 0 ; i < MAX_LIST_SIZE ; i++ ) {
        List *cur_list = &lists[i];
        if ( !strcmp(cur_list->name,buf) ) 
            return cur_list;
    }
    return NULL;
}
Hash *get_hash(char *buf) {
    int i;
    if ( !buf ) return NULL;
    for ( i = 0 ; i < MAX_HASH_SIZE ; i++ ) {
        Hash *cur_hash = &hashs[i];
        if ( !strcmp(cur_hash->name,buf) ) 
            return cur_hash;
    }
    return NULL;
}
Bitmap *get_bitmap(char *buf) {
    int i;
    if ( !buf ) return NULL;
    for ( i = 0 ; i < MAX_BITMAP_SIZE ; i++ ) {
        Bitmap *cur_bitmap = &bitmaps[i];
        if ( !strcmp(cur_bitmap->name,buf) ) 
            return cur_bitmap;
    }
    return NULL;
}

/*
 * test function
 */
ERROR_NUMBER create_list(char *buf) {
    int i;
    char *tok = init_tok(buf);
    tok = next_tok();
    tok = next_tok();
    for ( i = 0 ; i < MAX_LIST_SIZE ; i++ ) {
        List *cur_list = &lists[i];
        if ( strlen(cur_list->name) == 0 ) {
            strcpy(cur_list->name,tok);
            list_init(&cur_list->list);
            return SUCCESS;
        }
    }
    return LIST_IS_FULL;
}
ERROR_NUMBER create_hash(char *buf) {
    int i;
    char *tok = init_tok(buf);
    tok = next_tok();
    tok = next_tok();
    for ( i = 0 ; i < MAX_HASH_SIZE ; i++ ) {
        Hash *cur_hash = &hashs[i];
        if ( strlen(cur_hash->name) == 0 ) {
            strcpy(cur_hash->name,tok);
            hash_init(&cur_hash->hash,hash_hash_function,hash_less_function,NULL);
            return SUCCESS;
        }
    }
    return HASH_IS_FULL;
}
ERROR_NUMBER create_bitmap(char *buf) {
    int i;
    char *tok = init_tok(buf);
    tok = next_tok();
    tok = next_tok();
    for ( i = 0 ; i < MAX_BITMAP_SIZE ; i++ ) {
        Bitmap *cur_bitmap = &bitmaps[i];
        if ( strlen(cur_bitmap->name) == 0 ) {
            strcpy(cur_bitmap->name,tok);
            tok = next_tok();
            cur_bitmap->bitmap = bitmap_create(str2int(tok));
            return SUCCESS;
        }
    }
    return COMMAND_NOT_FOUND;
}
ERROR_NUMBER struct_delete(char *buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List* cur_list = get_list(tok);
    if ( cur_list ) strcpy(cur_list->name,"");
    Hash* cur_hash = get_hash(tok);
    if ( cur_hash ) strcpy(cur_hash->name,"");
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( cur_bitmap ) strcpy(cur_bitmap->name,"");
    if ( !cur_list && !cur_hash && !cur_bitmap ) 
        return DELETE_ERROR_NOT_EXISTS;
    return SUCCESS;
}
ERROR_NUMBER dumpdata(char *buf) {
    int i;
    char *tok = init_tok(buf);
    tok = next_tok();

    List* cur_list = get_list(tok);
    if ( cur_list ) {
        struct list_elem *e;
        for ( e=list_begin(&(cur_list->list)) ; e!=list_end(&(cur_list->list)) ; 
                e=list_next(e) ) {
            List_struct *cur_entry = list_entry(e,List_struct,elem);
            printf("%d ",cur_entry->value);
        }
        if ( !list_empty(&(cur_list->list)) ) puts("");
    }
    Hash* cur_hash = get_hash(tok);
    if ( cur_hash ) {
        if ( !hash_empty(&cur_hash->hash) ) {
            for ( i = 0 ; i < cur_hash->hash.bucket_cnt ; i++ ) {
                struct list* bucket = &cur_hash->hash.buckets[i];
                if ( !list_empty(bucket) ) {
                    struct list_elem *e;
                    for ( e=list_begin(bucket);e!=list_end(bucket);
                            e=list_next(e) ) {
                        struct hash_elem* cur_list_entry = list_entry(e,struct hash_elem,list_elem);
                        Hash_struct* cur_hash_entry = hash_entry(cur_list_entry,Hash_struct,hash_elem);
                        printf("%d ",cur_hash_entry->value);
                    }
                }
            }
            puts("");
        }
    }
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( cur_bitmap ) {
        int size = bitmap_size(cur_bitmap->bitmap);
        for ( i = 0 ; i < size ; i++ ) {
            bool cur_bit = bitmap_test(cur_bitmap->bitmap,i);
            printf("%s",cur_bit?"1":"0"); /* change_print : 1->true 0->false */
        }
        puts("");
    }
    if ( !cur_list && !cur_hash && !cur_bitmap ) 
        return DELETE_ERROR_NOT_EXISTS;
    return SUCCESS;
}
ERROR_NUMBER quit(char *buf) {
    return END_OR_PROGRAM;
}
ERROR_NUMBER test_list_insert(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List *cur_list = get_list(tok);
    if ( !tok ) return LIST_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);
    tok = next_tok();
    int val = str2int(tok);

    List_struct *input_node = (List_struct*)malloc(sizeof(List_struct));
    input_node->value = val;

    struct list_elem* e;
    int i;
    for ( i=0,e=list_head(&cur_list->list);e!=list_end(&cur_list->list);
            i++,e=list_next(e) ) 
        if ( i == idx ) {
            list_insert(list_next(e),&input_node->elem);
            return SUCCESS;
        }
    return LIST_RANGE_EXCEED;
}
ERROR_NUMBER test_list_splice(char* buf) {
    int i,idx1,idx2,idx3;
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *first_list = get_list(tok);
    if ( !first_list ) return LIST_IS_NOT_EXISTS;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    List *second_list = get_list(tok);
    if ( !second_list ) return LIST_IS_NOT_EXISTS;

    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    idx3 = str2int(tok);

    struct list_elem* e,*e1,*e2,*e3;
    for ( i=0,e=list_begin(&first_list->list);e!=list_end(&first_list->list);
            i++,e=list_next(e) ) {
        if ( idx1 == i ) 
            e1 = e;
    }
    for ( i=0,e=list_begin(&second_list->list);e!=list_end(&second_list->list);
            i++,e=list_next(e) ) {
        if ( idx2 == i ) 
            e2 = e;
        if ( idx3 == i ) 
            e3 = e;
    }
    list_splice(e1,e2,e3);
    return SUCCESS;
}
ERROR_NUMBER test_list_push(char* buf) {
    /*
     * 이런거 없는뎅?
     */
}
ERROR_NUMBER test_list_push_front(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List* cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    List_struct *new_node = (List_struct*)malloc(sizeof(List_struct));
    tok = next_tok();
    new_node->value = str2int(tok);
    list_push_front(&cur_list->list,&new_node->elem);
    return SUCCESS;
}
ERROR_NUMBER test_list_push_back(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List* cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    List_struct *new_node = (List_struct*)malloc(sizeof(List_struct));
    tok = next_tok();
    new_node->value = str2int(tok);
    list_push_back(&cur_list->list,&new_node->elem);
    return SUCCESS;

}
ERROR_NUMBER test_list_remove(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List* cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);

    struct list_elem* e;
    int i;
    for ( i=0,e=list_next(list_head(&cur_list->list));e!=list_end(&cur_list->list);
            i++,e=list_next(e) ) {
        if ( i == idx ) {
            list_remove(e);
            return SUCCESS;
        }
    }
    return LIST_RANGE_EXCEED;
}
ERROR_NUMBER test_list_pop_front(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    
    list_pop_front(&cur_list->list);
    return SUCCESS;
}
ERROR_NUMBER test_list_pop_back(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    
    list_pop_back(&cur_list->list);
    return SUCCESS;

}
ERROR_NUMBER test_list_front(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    List_struct* cur_entry = list_entry(list_front(&cur_list->list),List_struct,elem);
    printf("%d\n",cur_entry->value);
    return SUCCESS;
}
ERROR_NUMBER test_list_back(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    List_struct* cur_entry = list_entry(list_back(&cur_list->list),List_struct,elem);
    printf("%d\n",cur_entry->value);
    return SUCCESS;
}
ERROR_NUMBER test_list_size(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    printf("%d\n",list_size(&cur_list->list));
    return SUCCESS;
}
ERROR_NUMBER test_list_empty(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    printf("%s\n",list_empty(&cur_list->list)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_list_reverse(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    list_reverse(&cur_list->list);
    return SUCCESS;
}
ERROR_NUMBER test_list_sort(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    list_sort(&cur_list->list,list_less_function,NULL);
    return SUCCESS;

}
ERROR_NUMBER test_list_insert_ordered(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    tok = next_tok();

    List_struct* new_node = (List_struct*)malloc(sizeof(List_struct));
    new_node->value = str2int(tok);
    list_insert_ordered(&cur_list->list,&new_node->elem,list_less_function,NULL);
    return SUCCESS;
}
ERROR_NUMBER test_list_unique(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List* cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    
    List* second_list;
    tok = next_tok();
    if ( tok ) {
        second_list = get_list(tok);
        if ( !second_list ) return LIST_IS_NOT_EXISTS;
    }
    list_unique(&cur_list->list,second_list?(&second_list->list):NULL,list_less_function,NULL);
    return SUCCESS;
}
ERROR_NUMBER test_list_max(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    struct list_elem* e = list_max(&cur_list->list,list_less_function,NULL);
    List_struct* cur_entry = list_entry(e,List_struct,elem);
    printf("%d\n",cur_entry->value);
    return SUCCESS;
}
ERROR_NUMBER test_list_min(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;

    struct list_elem* e = list_min(&cur_list->list,list_less_function,NULL);
    List_struct* cur_entry = list_entry(e,List_struct,elem);
    printf("%d\n",cur_entry->value);
    return SUCCESS;
}
void swap(struct list_elem** e1,struct list_elem** e2) {
    struct list_elem* t = *e1;
    *e1 = *e2;
    *e2 = t;
}
void list_swap(struct list_elem *e1,struct list_elem* e2) {
    if ( e1 == e2 ) return;
    struct list_elem* e1Prev = e1->prev;
    struct list_elem* e1Next = e1->next;
    struct list_elem* e2Prev = e2->prev;
    struct list_elem* e2Next = e2->next;
    swap(&e1Prev->next,&e2Prev->next);
    swap(&e1Next->prev,&e2Next->prev);
    swap(&e1->prev,&e2->prev);
    swap(&e1->next,&e2->next);
}
ERROR_NUMBER test_list_swap(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    
    int idx1,idx2,i;
    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    
    struct list_elem *e,*e1,*e2;
    for ( i=0,e=list_begin(&cur_list->list);e!=list_end(&cur_list->list);
            i++,e=list_next(e) ) {
        if ( i == idx1 ) 
            e1 = e;
        if ( i == idx2 ) 
            e2 = e;
    }
    list_swap(e1,e2);
    return SUCCESS;
}
void list_shuffle(struct list* l) {
    srand((unsigned)time(NULL));
    int n = 1000;
    int size = list_size(l);
    while ( n-- ) {
        int idx1,idx2,i;
        struct list_elem* e1,*e2,*e;
        idx1 = rand()%size;
        idx2 = rand()%size;
        for ( i=0,e=list_begin(l);e!=list_end(l);i++,e=list_next(e) ){
            if ( i == idx1 ) e1 = e;
            if ( i == idx2 ) e2 = e;
        }
        list_swap(e1,e2);
    }
}
ERROR_NUMBER test_list_shuffle(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    List *cur_list = get_list(tok);
    if ( !cur_list ) return LIST_IS_NOT_EXISTS;
    
    list_shuffle(&cur_list->list);
    return SUCCESS;
}
ERROR_NUMBER test_hash_insert(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;

    tok = next_tok();
    Hash_struct* new_node = (Hash_struct*)malloc(sizeof(Hash_struct));
    new_node->value = str2int(tok);
    hash_insert(&cur_hash->hash,&new_node->hash_elem);
    return SUCCESS;
}
ERROR_NUMBER test_hash_replace(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;

    tok = next_tok();
    Hash_struct* new_node = (Hash_struct*)malloc(sizeof(Hash_struct));
    new_node->value = str2int(tok);
    hash_replace(&cur_hash->hash,&new_node->hash_elem);
    return SUCCESS;
}
ERROR_NUMBER test_hash_find(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;

    tok = next_tok();
    Hash_struct* find_hash = (Hash_struct*)malloc(sizeof(Hash_struct));
    find_hash->value = str2int(tok);

    struct hash_elem* e = hash_find(&cur_hash->hash,&find_hash->hash_elem);
    if ( e ) {
        Hash_struct* cur_entry = hash_entry(e,Hash_struct,hash_elem);
        printf("%d\n",cur_entry->value);
    }
    return SUCCESS;
}
ERROR_NUMBER test_hash_delete(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;

    tok = next_tok();
    Hash_struct* del_node = (Hash_struct*)malloc(sizeof(Hash_struct));
    del_node->value = str2int(tok);
    hash_delete(&cur_hash->hash,&del_node->hash_elem);
    return SUCCESS;
}
ERROR_NUMBER test_hash_clear(char* buf){
    char *tok = init_tok(buf);
    tok = next_tok();

    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash) return HASH_IS_NOT_EXISTS;
    hash_clear(&cur_hash->hash,NULL);
    return SUCCESS;
}
ERROR_NUMBER test_hash_size(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Hash *cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;

    printf("%d\n",hash_size(&cur_hash->hash));
    return SUCCESS;
}
ERROR_NUMBER test_hash_empty(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Hash *cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;
    printf("%s\n",hash_empty(&cur_hash->hash)?"true":"false");
    return SUCCESS;
}
void hash_square_function(struct hash_elem* e,void *aux) {
    Hash_struct *cur_entry = hash_entry(e,Hash_struct,hash_elem);
    cur_entry->value = cur_entry->value * cur_entry->value;
}
void hash_triple_function(struct hash_elem* e,void *aux) {
    Hash_struct *cur_entry = hash_entry(e,Hash_struct,hash_elem);
    cur_entry->value = cur_entry->value * cur_entry->value * cur_entry->value;
}
ERROR_NUMBER test_hash_apply(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Hash* cur_hash = get_hash(tok);
    if ( !cur_hash ) return HASH_IS_NOT_EXISTS;
    tok = next_tok();
    if ( !strcmp(tok,"square") ) {
        hash_apply(&cur_hash->hash,hash_square_function);
    } else if ( !strcmp(tok,"triple") ) {
        hash_apply(&cur_hash->hash,hash_triple_function);
    }
    return SUCCESS;
}
int hash_int_2(int a) {
    unsigned int key = a;
    key = ~key + (key << 15); // key = (key << 15) - key - 1;
    key = key ^ (key >> 12);
    key = key + (key << 2);
    key = key ^ (key >> 4);
    key = key * 2057; // key = (key + (key << 3)) + (key << 11);
    key = key ^ (key >> 16);
    return key%MAX_HASH_SIZE;
}
ERROR_NUMBER test_hash_int_2(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    printf("%d\n",hash_int_2(str2int(tok)));
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_size(char* buf){
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    printf("%u\n",bitmap_size(cur_bitmap->bitmap));
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_set(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    tok = next_tok();
    int idx = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    bitmap_set(cur_bitmap->bitmap,idx,mask);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_mark(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);
    bitmap_mark(cur_bitmap->bitmap,idx);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_reset(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);
    bitmap_reset(cur_bitmap->bitmap,idx);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_flip(char* buf){
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);
    bitmap_flip(cur_bitmap->bitmap,idx);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_test(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    tok = next_tok();
    int idx = str2int(tok);
    printf("%s\n",bitmap_test(cur_bitmap->bitmap,idx)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_set_all(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    bitmap_set_all(cur_bitmap->bitmap,mask);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_set_multiple(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;

    int idx1,idx2;
    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    bitmap_set_multiple(cur_bitmap->bitmap,idx1,idx2,mask);
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_count(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    printf("%u\n",bitmap_count(cur_bitmap->bitmap,idx1,idx2,mask));
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_contains(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    printf("%s\n",bitmap_contains(cur_bitmap->bitmap,idx1,idx2,mask)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_any(char* buf){
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    printf("%s\n",bitmap_any(cur_bitmap->bitmap,idx1,idx2)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_none(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    printf("%s\n",bitmap_none(cur_bitmap->bitmap,idx1,idx2)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_all(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    printf("%s\n",bitmap_all(cur_bitmap->bitmap,idx1,idx2)?"true":"false");
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_scan(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    printf("%u\n",bitmap_scan(cur_bitmap->bitmap,idx1,idx2,mask));
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_scan_and_flip(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    int idx1,idx2;

    tok = next_tok();
    idx1 = str2int(tok);
    tok = next_tok();
    idx2 = str2int(tok);
    tok = next_tok();
    bool mask = strcmp(tok,"true")==0?true:false;
    printf("%u\n",bitmap_scan_and_flip(cur_bitmap->bitmap,idx1,idx2,mask));
    return SUCCESS;
}
ERROR_NUMBER test_bitmap_dump(char* buf){
    char *tok = init_tok(buf);
    tok = next_tok();
    
    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    bitmap_dump(cur_bitmap->bitmap);
    return SUCCESS;
}
struct bitmap *bitmap_expand(struct bitmap *bitmap,int size) {
    int n = bitmap_size(bitmap);
    struct bitmap* ret_bitmap = bitmap_create(n + size);
    int i;
    for ( i = 0 ; i < n ; i++ ) 
        bitmap_set(ret_bitmap,i,bitmap_test(bitmap,i));
    bitmap_destroy(bitmap);
    return ret_bitmap;
}
ERROR_NUMBER test_bitmap_expand(char* buf) {
    char *tok = init_tok(buf);
    tok = next_tok();

    Bitmap* cur_bitmap = get_bitmap(tok);
    if ( !cur_bitmap ) return BITMAP_IS_NOT_EXISTS;
    tok = next_tok();
    int size = str2int(tok);
    cur_bitmap->bitmap = bitmap_expand(cur_bitmap->bitmap,size);
    return SUCCESS;
}
