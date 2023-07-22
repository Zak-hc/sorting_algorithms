<<<<<<< HEAD
#ifndef MAIN_H
#define MAIN_H
=======
#ifndef SORT_H
#define SORT_H

>>>>>>> 3d34ee258789297b50c9c3e5d36c3589519dc783
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
<<<<<<< HEAD
=======
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
>>>>>>> 3d34ee258789297b50c9c3e5d36c3589519dc783
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
<<<<<<< HEAD
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
=======
>>>>>>> 3d34ee258789297b50c9c3e5d36c3589519dc783
#endif
