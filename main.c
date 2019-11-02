#include<stdio.h>
#include<time.h>
#include "BPTree.h"

int main(int argc, const char* argv[]){
	int i;
	BPTree T;
	Result *res;

	T = Initialize();

	int data[] = {10, 15, 21, 37, 44, 51, 59, 63, 72, 85, 91, 97};
	i = 1;
	while(i < 13){
		T = Insert(T, data[i-1], i);
		i++;
	}
	Travel(T);
	printf("\n");
	TravelData(T);
	printf("\n");
	res = SearchBPTree(T,85);
	if (res->tag == True){
		printf("Find! value is: %d.\n", res->pt->value[res->i]);
	}else{
		printf("not found!\n");
	}
        
	printf("Remove 37:\n");
	Remove(T, 37);
	printf("Remove 44:\n");
	Remove(T, 44);
	Travel(T);
	Destroy(T);

	return 0;
}
