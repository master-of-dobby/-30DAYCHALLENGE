//wcpp to learn about reversing a string
#include<iostream>
using namespace std;

string reverseString(char *a){
	int i,j;
	char temp;
	
	for(j=0; a[j]!='\0'; j++){
	}
	j = j-1;
	
	for(i=0; i<j; i++,j--){
		swap(a[i],a[j]);
	}
	
	return a;
}
int main()
{
	//char a[] = "Harry7@";

	char a[100];

	cout << "\n\t Enter a name : ";
	cin >> a; 

	cout << reverseString(a);

}
