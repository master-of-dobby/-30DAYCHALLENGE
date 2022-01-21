//wcpp to learn about comparing string
#include<iostream>
using namespace std;

void compString(char *a, char *b){
	int i,j;
	for(i=0,j=0; a[i]!='\0',b[j]!='\0'; i++, j++)
		if(a[i]!=b[j])
			break;
	
	if(a[i]==b[j])
		cout << "\n\t " << a << " == " << b << endl;
	else if(a[i]<a[j])
		cout << "\n\t " << a << " < " << b << endl;
	else
		cout << "\n\t " << a << " > " << b << endl;
			
}
int main()
{
	//char a[] = "Harry7@";

	char a[100],b[100];

	cout << "\n\t Enter two strings : \n";
	cin >> a; 
	cin >> b;
	

	compString(a,b);

}
