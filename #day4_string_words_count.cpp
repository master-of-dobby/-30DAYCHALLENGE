//wcpp to learn about words count
#include<iostream>
using namespace std;

int main()
{
	char a[] = "Hi Hello I am a  Programmer!";
	/*string a = "hello";
	char a[10];
	/*cout << "\n\t Enter the string : ";
	cin >> a;*/
	cout << "\n\t YOUR STRING : " << a << endl;
	int c=1;//last one won't give
	
	for(int i=0;a[i]!='\0';i++){
		if(a[i]==' ' and a[i-1]!=' ')
			c++;
	}
	cout << "\n\t WORDS : " << c ;
	
	
	
	
}
