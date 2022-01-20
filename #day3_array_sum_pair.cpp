//array operations a pair of elements with sum K array; 
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
	for(int i=0;i<size-1;i++){
		for(int j=i+1;j<size;j++){
			if(a[i]+a[j]==x)
				cout << "\t(" << a[i] << "," << a[j] << ")" << endl;
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
