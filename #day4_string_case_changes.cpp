//wcpp to learn about strings case change
#include<iostream>
using namespace std;

int main()
{
	//char a[] = "hello";
	//string a = "world";
	char a[10];
	cout << "\n\t Enter the string : ";
	cin >> a;
	cout << "\n\t YOUR STRING : " << a << endl;
	
	
	for(int i=0;a[i]!='\0';i++){
		if(a[i] >= 97 and a[i]<=122 )
			printf("%c",a[i]-32 );
		else if(a[i] >=65 and a[i] <= 90)
			printf("%c",a[i]+32 );
		else //to be left special chars as it is
			printf("%c",a[i]);
	}
	
	
	
	
}
