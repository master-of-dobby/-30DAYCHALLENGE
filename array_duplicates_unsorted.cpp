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
			
			a[0] = 5,a[1] = 3,a[2] = 6,a[3] = 4,a[4]=6;
			a[5] = 5,a[6]=6,a[7]=8,a[8]=2,a[9]=8;

		}
		void display(){
			for(int i=0;i<size;i++)
				cout << "\t" << a[i];
		}
		
		void checkDuplicate();//unsorted array
		
		~Array(){
			delete []a;
		}
		
};

void Array::checkDuplicate(){
	int i,j,count;
	int k[size/2];
	for(i=0;i<size-1;i++){
		count = 1;
		if(a[i] != -1){
			for(j=i+1;j<size;j++){
				if(a[i]==a[j] and a[j]!=-1){
					count++;
					a[j] = -1;
				}
			}
		}
	
		if(count>1)
	 		cout << "\t" << a[i] << " appears " << count << " times!" << endl;
	 	
	}
	

	

}


int main()
{
	Array arr;
	arr.display();
	cout << endl;
	arr.checkDuplicate();
	
}
