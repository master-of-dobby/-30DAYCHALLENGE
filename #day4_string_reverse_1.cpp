//wcpp to learn about reversing a string
#include<iostream>
using namespace std;

string reverseString(char *a){
	int i;
	for(i=0; a[i]!=0 ;i++){
		
	}
	int k=0;
	char b[100];
	for(int j=i-1; j>=0; j--,k++)
		b[k] = a[j];
	b[k] = '\0';
		
	return b;
}

int main()
{
	//char a[] = "Harry7@";
	
	
	char a[100];
	cout << "\n\t Enter a name : ";
	cin >> a; 
	
	string k;
	k = reverseString(a);
	cout << k;
	
	
}
