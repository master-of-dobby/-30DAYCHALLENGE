//array missing element only one;
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
			
			a[0] = 6,a[1] = 7,a[2] = 8,a[3] = 9,a[4]=10;
			a[5] = 11,a[6]=13,a[7]=14,a[8]=15,a[9]=16;
		}
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void missing();
		void missing1();
		
		~Array(){
			delete []a;
		}
		
};

void Array::missing(){
	cout << endl;
	int k=0;
	for(int i=0;i<size-2; i++){
		k = a[i+1]-a[i];
		if((a[i+1]-a[i])==(a[i+2]-a[i+1]))
		{
			k = a[i+1]-a[i];
			continue;
		}
			
		else{
			cout << "\n\t Element missing : " << a[i+1]+k << endl;
			break;
		}
			
}
}

	
void Array::missing1(){
	cout << endl;
	int diff = a[0]-0;
	
	for(int i=0;i<size;i++){
		if(diff!=a[i]-i){
			cout << "\n\t missing element : " << diff+i;
			//diff = a[i]-i;
			break;
		}	
	}
	
}



int main()
{
	Array arr;
	arr.display();
	arr.missing();
	arr.missing1();
	
}
