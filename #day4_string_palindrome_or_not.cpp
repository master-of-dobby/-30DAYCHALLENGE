//wcpp to learn about comparing string
#include<iostream>
using namespace std;

string palindrome(char *a){
	int i,j;
	for(j=0; a[j]!='\0'; j++){
		
	}
	j = j-1;
	
	for(i=0; i<j; i++,j--){
		if(a[i]!=a[j])
			return "NOT A PALINDROME!";
	}
	return "\n\t PALINDROME ";
			
}
int main()
{
	//char a[] = "Harry7@";
	char a[100];
	cout << "\n\t Enter a string : ";
	cin >> a; 

	cout << palindrome(a);

}
