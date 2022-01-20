//array operations duplicate elements in a sorted array; 
#include<iostream>
using namespace std;

class Array{
	private:
		int *a;
		int size;
	public:
		Array(){
			size = 10;
			a = new int[size];
			
			a[0] = 6,a[1] = 8,a[2] = 9,a[3] = 9,a[4]=12;
			a[5] = 15,a[6]=15,a[7]=15,a[8]=20,a[9]=21;
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
	int lastduplicate = 0;
	
	for(int i=0; i<size; i++){
		if(a[i]==a[i+1] and a[i] != lastduplicate){
			cout << "\t" << a[i] ;
			lastduplicate = a[i];
 		}
	}
	
}


int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.checkDuplicate();
	
}
