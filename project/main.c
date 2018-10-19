/*
 * main.c
 *
 *  Created on: Oct 18, 2018
 *      Author: Bojan Strbac
 *      Index: RA82/2015
 *      email: bokasina@gmail.com
 *
 *      Text: Napraviti modul koji predstavlja jednostruko spregnutu kruznu listu.
 *      Modul izvesti kao dinamicku biblioteku (deljeni objekat). Zatim napraviti
 *      funkciju koja prolazi kroz listu i ispisuje svaki n-ti element. Nakon ispisa,
 *      izbacuje ga iz liste i nastavlja dalje. Broj n se zadaje na ulazu. Funkcija
 *      se zavrsava kada ispise i izbaci sve elemente iz liste.
 */
#include <stdio.h>
#include "circularList.h"



#define NELEM 10

int main()
{
	listElem* head;

	uint16_t i;

	ListCreate(&head);

	for(i = 1; i <= NELEM; ListPush(&head, i), i++);
	ListPrint(head);
	//printf("%" print_data, (head->next)->data);
	//DeleteElem(&head, head);
	//DeleteElem(&head, head);
	//DeleteElem(&head, head);
	//DeleteElem(&head, &head);
	ListPrint(head);
	PrintEveryN(&head,2);
	ListPrint(head);
	printf("AAAA");
	return 0;
}

