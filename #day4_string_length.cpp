//wcpp to learn about string length
#include<iostream>
using namespace std;

int main()
{
	char a[] = "naveen";
	//cin >> a;
	//gets(a);
	cout << a << endl;
	printf("%d\t",a);
	
	int c=0,i=0;
	while(a[i]!='\0'){
		c++;
		i++;
	}
	cout << "\t length = " << c << endl;
}
