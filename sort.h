#ifndef SORTH_H
#define SORTH_H


#include "stddef.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_ints(int *a, int *b);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t **h, listint_t **n1, listint_t *n2);
void selection_sort(int *array, size_t size);


void sort_recursion(int *array, size_t size, int left, int right);
int partition(int *array, size_t size, int left, int right);
void swap(int *a, int *b);
void quick_sort(int *array, size_t size);



/*100*/
void shell_sort(int *array, size_t size);




void swap_ints(int *a, int *b);
int hoare_partition(int *array, size_t size, int left, int right);
void hoare_sort(int *array, size_t size, int left , int right);
void quick_sort_hoare(int *array, size_t size);



#endif
