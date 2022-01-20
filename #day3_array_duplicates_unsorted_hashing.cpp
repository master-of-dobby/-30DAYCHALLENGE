//array operations duplicate elements in an unsorted array; 
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
			
			a[0] = 5,a[1] = 3,a[2] = 26,a[3] = 4,a[4]=6;
			a[5] = 5,a[6]=6,a[7]=8,a[8]=2,a[9]=8;
			
			max = maximum()+1;
			
		}
		
		int maximum();
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void checkDuplicate();//unsorted array
		
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

void Array::checkDuplicate(){
	int i,j,count;
	int h[max] = {0};
	
	for(i=0;i<size;i++)
		h[a[i]]++;
	
	
	for(i=0;i<max;i++)
		if(h[i]>1)
			cout << "\t" <<  i << " occurs " << h[i] << " times!" << endl;

	

}


int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.checkDuplicate();
	
}
