1 #include <stdlib.h>                                                             
  2 #include "lists.h"                                                              
  3                                                                                 
  4 /**                                                                             
  5  * add_nodeint adds a new node at the beginning of a linked list                
  6  * @head: pointer to the first node in the list                                 
  7  * @n: data to insert in that new node                                          
  8  * Return: pointer to the new node, or NULL if it fails                         
  9  */                                                                             
10                                                                                 
11 listint_t *add_nodeint(listint_t **head, const int n)                           
12 {                                                                               
13         listint_t *new;                                                         
14                                                                                 
15         new = malloc(sizeof(listint_t));                                        
16         if (new == NULL)                                                        
17                 return (NULL);                                                  
18                                                                                 
19         new->n = n;                                                             
20         new->next = *head;                                                      
21         *head = new;                                                            
22                                                                                 
23         return (*head);                                                         
24 }                                                                               
~             
