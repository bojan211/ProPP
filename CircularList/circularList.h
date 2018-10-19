/*
 * circularList.h
 *
 *  Created on: Oct 18, 2018
 *      Author: rtrk
 */

#ifndef CIRCULARLIST_H_
#define CIRCULARLIST_H_

#include <stdint.h>
#include <inttypes.h>

typedef int_least32_t data_type;
#define print_data PRIuLEAST32

typedef struct listElem
{
	data_type data;
	struct listElem* next;
} listElem;

void ListCreate(listElem**);
void ListPush(listElem**, data_type);
void ListPrint(listElem*);
void DeleteElem(listElem**, listElem*);
void PrintEveryN(listElem**, uint8_t);

#endif /* CIRCULARLIST_H_ */
