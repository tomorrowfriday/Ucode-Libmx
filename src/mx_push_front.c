#include "libmx.h"

void mx_push_front(t_list **list, void *data){
    t_list *front = mx_create_node(data);
    // t_list *temp = NULL;
    
    front->next = (*list);
    (*list) = front;
}
