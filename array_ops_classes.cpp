//array operations in c++ using classes;
#include<iostream>
using namespace std;
template<class T>

class Array{
	private:
		T *A;
		int length;
		int size;
		
	public:
		Array(){
			size = 10;
			length = 0;
			A = new T[length];
		}
		
		Array(int sz){
			size = sz;
			length = 0;
			A = new T[size];
		}
		
		~Array(){
			delete []A;
		}
		
		void display();
		void insert(int index, T x);
		T del(int index);
};

template<class T>
void Array<T>::display(){
	for(int i=0; i<length; i++)
		cout << "\t" << A[i];
	cout << endl;
}

template<class T>
void Array<T>::insert(int index, T x){
	if(index>=0 && index<=length){
		for(int i=length-1; i>=index; i--)
			A[i+1] = A[i];
		A[index] = x;
		length++;
	}
}

template<class T>
T Array<T>::del(int index){
	T x=0;
	int i=0;
	if(i>=0 && i<=length){
		x = A[index];
		for(i=index; i<length; i++)
			A[i] = A[i+1];
		length--;
	}
	
	return x;
}

int main()
{
	Array<int> arr;
	arr.insert(0,1);
	arr.insert(1,2);
	arr.insert(2,3);
	arr.insert(3,4);
	arr.display();
	cout << arr.del(3) << endl;
	arr.display();
}
