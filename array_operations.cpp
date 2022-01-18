//array menu driven program for some operations
#include<iostream>
#include<stdlib.h>
using namespace std;

struct array{
	int *a;
	int length;
	int size;
};

void append(struct array *arr ,int x){
	//to append(add at end) x element
	if(arr->size-1 >= arr->length){
		arr->a[arr->length] = x;
		arr->length++;
	}
	else
		cout << "\n\t LIMIT EXCEEDED!" << endl;
	
}

void del(struct array *arr ,int x){
	//to delete a x element
	int flag=0;
	for(int i=0;i<arr->length;i++){
		if(arr->a[i]==x){
			cout << "\n\t Element found at loc " << i+1 << endl;
			for(int k=i; k<arr->length-1; k++)
				arr->a[k] = arr->a[k+1];
			arr->length--;
			flag=1;
		}
	}
	if(flag==0)
		cout << "\n\t ELEMENT NOT FOUND!" << endl;
}

void linear_search(struct array *arr ,int x){
	//to search a element using ls
	int flag=0;
	for(int i=0;i<arr->length;i++){
		if(arr->a[i]==x){
			cout << "\n\t Element found at " << i+1 << " loc" << endl;
			flag=1;
		}
		
	}
	
	if(flag==0)
		cout << "\n\t ELEMENT NOT FOUND!" << endl;
}

void sum(struct array *arr ){
	//sum of the elements
	int sum=0;
	for(int i=0; i<arr->length; i++)
		sum += arr->a[i];
	cout << "\n\t Sum of array elements : " << sum;
}

void insert(struct array *arr, int x, int k){
	//to insert x element at k index 
	arr->length++;
	
	for(int i=arr->length-2; i>=k; i--)
		arr->a[i+1] = arr->a[i];
	arr->a[k] = x;
}

void binary_search(struct array *arr, int x){
	//binary search
	//elements in the array must be in sorted order (applicable)
	int flag=0;
	int l=0;
	int u=arr->length-1;
	
	while(l<=u){
		int mid = (l+u)/2;
		if(arr->a[mid]==x){
			cout << "\n\t Element found at " << mid+1 << " loc" << endl;
			flag=1;
			break;
		}
		else{
			if(arr->a[mid] > x)
				u = mid-1;
			else
				l = mid+1;
		}
	}
	
	if(flag==0)
		cout << "\n\t Element NOT FOUND!" << endl;
}

void rec_bs(struct array *arr, int x, int l, int u){
	//recursivily binary search
	int flag=0;
	while(l<=u){
		int mid = (l+u)/2;
		if(arr->a[mid]==x){
			cout << "\n\t Element found at " << mid+1 << " loc" << endl;
			flag=1;
			break;
		}
		else{
			if(arr->a[mid] > x)
				return rec_bs(arr, x, l, mid-1);
			else
				return rec_bs(arr, x, mid+1, u);
		}
			
	}
	if(flag==0)
		cout << "\n\t Element NOT FOUND! " << endl;
	
}

void get(struct array arr, int n){
	//to get at particular index
	//no need modify -> !pointers
	cout << arr.a[n] << endl;
}
	
void set(struct array *arr, int n, int x){
	arr->a[n] = x;
}	

int max(struct array arr){
	//to find maximum element in the array
	int max = arr.a[0];
	for(int i=1; i<arr.length; i++)
		if(arr.a[i] > max)
			max = arr.a[i];
	
	return max;
}

int min(struct array arr){
	//to find minimum element in the array
	int min=arr.a[0];
	for(int i=1; i<arr.length; i++)
		if(arr.a[i] < min)
			min = arr.a[i];
		
	return min;
}

int avg(struct array arr){
	//to get average of the elements of the array
	int sum=0;
	for(int i=0; i<arr.length; i++)
		sum += arr.a[i];
	return sum/arr.length;
}

void swap(int *a, int *b){
	//to swap
	int temp = *a;
	*a = *b;
	*b = temp;
}
void reverse(struct array *arr){
	//to reverse the array
	int i=0;
	int j=arr->length-1;
	
	while(i<=j){
		swap(arr->a[i], arr->a[j]);
		i++;j--;
	}
}

string isSorted(struct array *arr ){
	//to check array is sorted or not?
	for(int i=0; i<arr->length-1; i++){
		if(arr->a[i] > arr->a[i+1]){
			return "\n\tNOT SORTED!\n";
			break;
		}
	}
	return "\n\t SORTED \n";
}

void sortInsert(struct array *arr, int x){
	//inserting a element in a sorted array
	int k=0;
	int i=arr->length-1;
	
	while((arr->a[i] > x) && i>=0){
			arr->a[i+1] = arr->a[i];
			i--;
	}
	arr->a[i+1] = x;
	arr->length++;
}

void Rearrange(struct array *arr){
	//arrange +ve and -ve numbers on one side
	int i=0,j=arr->length-1;
	
	while(i<j){
		while(arr->a[i] < 0)
			i++;
		while(arr->a[j] >= 0)
			j--;
		
		if(i<j)
			swap(arr->a[i], arr->a[j]);
	}
	
}

struct array* merge(struct array *arr1 ,struct array *arr2){
	//merging two arrays sorted
	int i=0,j=0,k=0;
	struct array *arr3 = (struct array *)malloc(sizeof(struct array));
	
	while(i < arr1->length && j < arr2->length){
		if(arr1->a[i] < arr2->a[j])
			arr3->a[k++] = arr1->a[i++];
		else 
			arr3->a[k++] = arr2->a[j++];
	}
	
	for(;j<arr2->length;j++)
		arr3->a[k++] = arr2->a[j];
	for(;i<arr1->length;i++)
		arr3->a[k++] = arr1->a[i];
		
	arr3->length = arr1->length + arr2->length;
	
	return arr3;		
		

}

void sort(struct array *arr){
	for(int i=0; i<arr->length-1; i++){
		for(int j=i+1; j<arr->length; j++){
			if(arr->a[i] > arr->a[j])
				swap(arr->a[i] ,arr->a[j]);
		}
	}
}

void display(struct array *arr){
	// to display contents of the array
	for(int i=0;i<arr->length;i++)
		cout << "\t" << arr->a[i];
}

void ib(struct array *arr ){
	//to initialize inbuilt values
	for(int i=0; i<5; i++){
		arr->a[i] = (i+1)*2;
		arr->length++;
	}
}

int main()
{
	int n,ch,x;
	struct array a1;
	/*
	cout << "\n\t Enter the size : ";
	cin >> a1.size;*/
	a1.size = 10;
	
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
		a2.a[i] = (i+1)*3;
		a2.length++;
	}

	

	
	do{
		cout << "\n\t MENU\n\t1.append\n\t2.delete\n\t3.linear search\n\t4.sum\n\t5.display\n\t6.insert";
		cout << "\n\t7.binary search\n\t8.reverse\n\t9.sort\n\t10.EXIT";
		cout << "\n\t Enter your option : ";
		cin >> ch;
		
		switch(ch){
			case 0:
				ib(&a1);
			break;
			
			case 1:
				//append
				cout << "\n\t Enter the element : ";
				cin >> x;
				append(&a1 ,x);
			break;
			
			case 2:
				//delete
				cout << "\n\t Enter the element to be deleted : ";
				cin >> x;
				del(&a1,x);
			break;
			
			case 3:
				//linear search
				cout << "\n\t Enter the element to be searched : ";
				cin >> x;
				linear_search(&a1,x);
			break;
			
			case 4:
				//sum
				sum(&a1);
			break;
			
			case 6:
				int i;
				cout << "\n\t Enter the element to be inserted : ";
				cin >> x;
				cout << "\n\t Enter the index to be inserted : ";
				cin >> i;
				insert(&a1,x,i);
			break;
			
			case 7:
				//binary search
				cout << "\n\t Enter the element : ";
				cin >> x;
				rec_bs(&a1, x, 0,a1.length-1);
			break;
			
			case 8:
				//reverse
				reverse(&a1);
			break;
			
			case 9:
				//sort
				sort(&a1);
			break;
			
			case 10:
				//exit
				cout << "\n\t~~~BYE~~~ ;)";
			break;
				
			case 5:
				//display
				
				cout << endl;
				display(&a1);
				cout << endl;
			break;
				
			
		}
	}while(ch!=10);
	
	/*
	to do some more operations :)
	cout << endl;
	display(&a1);
	cout << endl;
	display(&a2);
	cout << endl;
	display(merge(&a1, &a2));*/
	
	
	

}


