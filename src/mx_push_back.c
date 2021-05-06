#include "libmx.h"

void mx_push_back(t_list **list, void *data){
    t_list *back = mx_create_node(data);
    t_list *last = NULL;
    // t_list *temp = NULL;
    if (list == NULL) *list = back;
    else{
    last = *list;
    while (last -> next != NULL)
        last = last -> next;
    last -> next = back;
    }
}
