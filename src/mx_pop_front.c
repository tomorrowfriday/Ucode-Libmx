#include "libmx.h"

void mx_pop_front(t_list **head){
    // if(*head == NULL) return NULL;
    s_list front = head;
    head = head -> next;
    front -> next = NULL;
    if (front == head)
    head = NULL;
    free(front);
}
