/*
 * circularList.c
 *
 *  Created on: Oct 18, 2018
 *      Author: rtrk
 */
#include "circularList.h"

#include <stdlib.h>
#include <stdio.h>

void ListCreate(listElem** head)
{
	*head = NULL;
}

void ListPush(listElem** head, data_type new_data)
{
	struct listElem* new_elem = (struct listElem*) malloc(sizeof(struct listElem));
	struct listElem* temp = (struct listElem*) malloc(sizeof(struct listElem));
	new_elem->data = new_data;
	temp = *head;

	if (*head == NULL)
	{
		*head = new_elem;
	}
	else
	{
		while (temp->next != *head)
		{
			temp = temp->next;
		}
		temp->next = new_elem;
	}

	new_elem->next = *head;
}

void DeleteElem(listElem** head, listElem* node)
{
	struct listElem* prev;
	prev = *head;

	while (prev->next != node) //Pronalazenje elementa koji je u listi ispred elementa za brisanje
	{
		prev = prev->next;
	}

	if (prev->next == prev) //Ako je element koji se brise jedini element u listi!
	{
		*head = NULL;
	}
	else if (*head == node) //Ako se brise prvi element liste
	{
		*head = node->next;
		prev->next = node->next;
	}
	else
	{
		prev->next = node->next;
	}

	free(node);
}

void PrintEveryN(listElem** head, uint8_t n)
{
	struct listElem* temp = (struct listElem*) malloc(sizeof(struct listElem));
	temp = *head;
	int_fast16_t counter = 1;

	while(*head != NULL)
	{
		if(counter % n == 0)
		{
			printf("BRISEM %" print_data "\n", temp->data);
			DeleteElem(head, temp);
		}
		counter++;
		temp = temp->next;
		printf("TEMP JE  %" print_data "\n", temp->data);
	}

	printf("Lista je prazna!\n");
}

void ListPrint(listElem* head)
{
	printf("\nIspis liste ! \n");
	struct listElem* temp = head;
	if (head != NULL)
	{
		do
		{
			printf("%" print_data "\n", temp->data);
	        temp = temp->next;
	    }
	    while (temp != head);
	}
}
