//array programs for set operations
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array{
	int *a;
	int length;
	int size;
};

struct array* Union(struct array *arr1, struct array *arr2 ){
	//to perform union operation
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	int k=0,i=0,j=0;
	while(i<arr1->length && j<arr2->length){
		if(arr1->a[i] == arr2->a[j]){
			arr3->a[k++] = arr1->a[i++];
			j++;
		}
		else if(arr1->a[i] < arr2->a[j])
			arr3->a[k++] = arr1->a[i++];
		else
			arr3->a[k++] = arr2->a[j++];
	}
	
	for(;j<arr2->length;j++){
		arr3->a[k++] = arr2->a[j];
	}
	for(;i<arr1->length;j++)
		arr3->a[k++] = arr2->a[i++];
		
	arr3->length = k;
	return arr3;
}

struct array* intersection(struct array *arr1, struct array *arr2){
	
	//to perform intersection operation
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	int i,j,k;
	i = j = k = 0;
	
	while(i<arr1->length && i<arr2->length){
		if(arr1->a[i] == arr2->a[j]){
			arr3->a[k++] = arr2->a[j++];
			i++;
		}
		else if(arr1->a[i] > arr2->a[j])
			j++;
		else
			i++;
	}
	
	arr3->length = k;
	
	return arr3;
}

struct array* difference(struct array *arr2, struct array *arr1){
	//to perform difference operation A-B only
	int i,j,k;
	i = j = k = 0;
	
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->a[i] == arr2->a[j]){
			i++;j++;
		}
		else if(arr1->a[i] != arr2->a[j])
			arr3->a[k++] = arr1->a[i++];
		else{
			i++;j++;
		}
			
	}
	
	arr3->length = k;
	
	return arr3;
}

void display(struct array *arr){
	// to display contents of the array
	for(int i=0;i<arr->length;i++)
		cout << "\t" << arr->a[i];
}


int main()
{
	int n,ch,x;
	struct array a1;
	/*
	cout << "\n\t Enter the size : ";
	cin >> a1.size;*/
	a1.size = 20;
	
	a1.a = (int *)malloc(a1.size*sizeof(int));
	a1.length = 0;
	
	for(int i=0; i<5; i++){ 
		a1.a[i] = (i+1)*2;
		a1.length++;
	}

	struct array a2;
	a2.size = 10;
	
	a2.a = (int *)malloc(a1.size*sizeof(int));
	a2.length = 0;
	
	for(int i=0; i<5; i++){
		a2.a[i] = (i+3)*2;
		a2.length++;
	}

	
	//display(Union(&a1,&a2));
	//display(intersection(&a1, &a2));
	display(difference(&a1,&a2));
	
	cout << "\n\t~~~BYE~~~" << endl;
	return 0;
}

