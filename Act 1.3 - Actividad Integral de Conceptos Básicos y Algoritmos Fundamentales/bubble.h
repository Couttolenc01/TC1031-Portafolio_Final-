// =================================================================
//
// File: bubble.h
// Author: Pedro Perez
// Description: This file contains the implementation of the
//				bubble sort.
//
// Copyright (c) 2020 by Tecnologico de Monterrey.
// All Rights Reserved. May be reproduced for any non-commercial
// purpose.
// =================================================================
#ifndef BUBBLE_H
#define BUBBLE_H

#include "header.h"
#include <vector>

template <class T>
void bubbleSortdia(std::vector<T> &v) {
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j].dia > v[j + 1].dia){
				swap(v, j, j + 1);
			}
		}
	}
}

template <class T>
void bubbleSortmes(std::vector<T> &v) {
	for(int i = v.size() - 1; i > 0; i--){
		for(int j = 0; j < i; j++){
			if(v[j].mes > v[j + 1].mes){
				swap(v, j, j + 1);
			}
		}
	}
}


#endif /* BUBBLE_H */
