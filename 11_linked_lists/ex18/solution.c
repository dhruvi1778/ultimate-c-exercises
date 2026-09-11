/* ************************************************************************** */
/*                                                                            */
/*   solution.c                                // anyone can copy the code    */
/*                                                                            */
/*   By: shobeedev                             // but only understanding      */
/*      <https://github.com/justshobee>        // makes it yours.             */
/*                                                                            */
/*   Created: 2026/09/11 09:57:54 by shobeedev // learn the why,              */
/*   Updated: 2026/09/11 10:30:27 by shobeedev // not only the how.           */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include "list.h"

#define SIZE 20

node*   create_node(void)
{
	node*   tmp;

	tmp = malloc(sizeof(node));
	tmp->prev = NULL;
	tmp->data = 0;
	tmp->next = NULL;

	return (tmp);
}

void	add_at_end(node** head, int data)
{
	node*	tmp;
	node*	ptr;

	tmp = create_node();
	tmp->data = data;
	if (*head == NULL)
	{
		*head = tmp;
		return ;
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = tmp;
	tmp->prev = ptr;
}

void	print_lst(node* head)
{
	if (!head)
	{
		printf("The list is empty!!\n");
		return ;
	}
	while (head)
	{
		printf("%d ", head->data);
		head = head->next;
	}
	printf("\n");
}

void	free_lst(node** head)
{
	node	*next;
	node	*ptr;

	ptr = *head;
	while (ptr)
	{
		next = ptr->next;
		free(ptr);
		ptr = next;
	}
	*head = NULL;
}

int		main(void)
{
	srand((unsigned)time(NULL));
	int		size;
	int		i;
	node*	head;

	size = rand() % (SIZE + 1);
	i = 0;
	head = NULL;
	while (i < size)
	{
		add_at_end(&head, rand() % (CHAR_MAX - 1 + 1) + 1);
		i++;
	}
	print_lst(head);
	free_lst(&head);
	return (0);
}

