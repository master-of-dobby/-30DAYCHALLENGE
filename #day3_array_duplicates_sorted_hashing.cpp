//array operations duplicate elements in a sorted array; 
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
			
			a[0] = 6,a[1] = 8,a[2] = 9,a[3] = 9,a[4]=12;
			a[5] = 15,a[6]=15,a[7]=15,a[8]=21,a[9]=21;
			max = a[9]+1;
		}
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void checkDuplicate();//sorted array
		
		~Array(){
			delete []a;
		}
		
};

void Array::checkDuplicate(){
	int h[max] = {0};
	int i=0;
	
	for(i=0; i<size; i++)
		h[a[i]]++;
		
	for(i=0;i<max;i++)
		if(h[i] > 1)
			cout << "\t" << i << " appears " << h[i] << " times!" << endl;

}


int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.checkDuplicate();
	
}
