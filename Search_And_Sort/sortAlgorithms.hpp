#pragma once

//Bubble Sort
template <class elemType>
void bubbleSort(elemType list[], int length) {
	for (int iteration = 1; iteration < length; iteration++) {
		for (int index = 0; index < length - iteration; index++) {
			if (list[index] > list[index + 1]) {
				elemType temp = list[index];
				list[index] = list[index + 1];
				list[index + 1] = temp;
			}
		}
	}
}

template <class elemType>
void insertSort(elemType list[], int length) {
	for (int firstOutOfOrder = 1; firstOutOfOrder < length; firstOutOfOrder++) {
		if (list[firstOutOfOrder] < list[firstOutOfOrder - 1]) {
			elemType temp = list[firstOutOfOrder];
			int location = firstOutOfOrder;
			
			do {
				list[location] = list[location - 1];
				location--;
			}
			while (location > 0 && list[location - 1] > temp);
			
			list[location] = temp;
		}
	}
}

template <class elemType>
void quickSort(elemType array[], int left, int right) {
	int i = left;
	int j = right;
	elemType temp;
	elemType pivot = array[(left + right) / 2];
	
	while (i <= j) {
		while (array[i] < pivot) i++;
		while (array[j] > pivot) j--;
		
		if (i <= j) {
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;
			i++;
			j--;
		}
	}
	
	if (left < j) quickSort(array, left, j);
	if (i < right) quickSort(array, i, right);
}
