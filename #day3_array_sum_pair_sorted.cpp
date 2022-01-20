//array operations a pair of elements with sum K array (sorted)
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
			
			a[0] = 1,a[1] = 3,a[2] = 4,a[3] = 5,a[4] = 6;
			a[5] = 8,a[6] = 9,a[7] = 10,a[8] = 12,a[9] = 14;
			
			max = maximum();
			
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
	int i=0;
	int j=size-1;
	
	while(i<j){ //if = 5,5 also will be printed
		if(a[i]+a[j]>10)
			j--;
		else if(a[i]+a[j]<10)
			i++;
		else{
			cout << "\t(" << a[i] << "," << a[j] << ")" << endl;
			i++;j--;
		}
	}
}

int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.findPair(10);
	
}
