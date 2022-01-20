//array operations a pair of elements with sum K array 
//using hashing ,without duplicates in array; 
#include<iostream>
using namespace std;

class Array{
	private:
		int *a;
		int size;
		int max;
	public:
		Array(){
			size = 10;
			a = new int[size];
			
			a[0] = 6,a[1] = 3,a[2] = 8,a[3] = 10,a[4] = 16;
			a[5] = 7,a[6] = 5,a[7] = 2,a[8] = 9,a[9] = 14;
			
			max = maximum()+1;
			
		}
		
		int maximum();
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void findPair(int );//unsorted array
		
		~Array(){
			delete []a;
		}
		
};

int Array::maximum(){
	int max = a[0];
	
	for(int i=0;i<size;i++)
		if(max < a[i])
			max = a[i];
	
	return max;
}

void Array::findPair(int x){
	
	int h[max] = {0};
	int i;
	for(i=0; i<size; i++)
		h[a[i]]++;
	
	for(i=0; i<size; i++){
		 if( x-a[i] >=0 && h[x-a[i]]==1 /*and a[i]!=(x-a[i])*/)
			cout << "\t(" << a[i] << "," << x-a[i] << ")" << endl;
		h[a[i]]++;
	}
	
}

int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.findPair(10);
	
}
