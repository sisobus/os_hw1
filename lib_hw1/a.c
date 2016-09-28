#include "a.h"

int main() {
    printf("%d\n",BITMAP_EXPAND);
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
