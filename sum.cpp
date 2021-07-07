#include "sum.h"

int sum(int n){
	int data = 0;
	for(int i = 0; i < n; i++){
		data += (i + 1);
	}

	return data;
}

