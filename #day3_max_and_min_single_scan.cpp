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
			
			a[0] = 1,a[1] = 93,a[2] = 4,a[3] = -5,a[4] = 6;
			a[5] = 8,a[6] = 9,a[7] = 10,a[8] = -12,a[9] = 14;
			
			max = maximum();
			
		}
		
		int maximum();
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void maxANDmin();
		
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

void Array::maxANDmin(){
	int max = a[0];
	int min = a[0];
	
	for(int i=0;i<size;i++)
		if(max < a[i])
			max = a[i];
		else if(min > a[i])
			min = a[i];
	cout << "\n\t MAXIMUM = " << max << "\n\t MINIMUM = " << min;
	
}

int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.maxANDmin();
	
}
