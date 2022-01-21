//wcpp to learn about counting vowels and consonants
#include<iostream>
using namespace std;

int main()
{
	char a[] = "Hi Hello I am a Programmer!";
	/*string a = "hello";
	char a[10];
	/*cout << "\n\t Enter the string : ";
	cin >> a;*/
	cout << "\n\t YOUR STRING : " << a << endl;
	int vc=0, cc=0,sc=0;
	
	for(int i=0;a[i]!='\0';i++){
		/*if((a[i]==97) || (a[i]==65) || (a[i]==101) || (a[i]==69) || (a[i]==105) || (a[i]==73) || (a[i]==111) ||
			(a[i]==79) || (a[i]==85) || (a[i]==117) ){
			vc++;	
			}*/
		if(a[i]=='a'||a[i]=='A'||a[i]=='i'||a[i]=='I'||a[i]=='e'||a[i]=='E'||a[i]=='o'||a[i]=='O' ||
			a[i]=='u'||a[i]=='U')
			vc++;
		else if(a[i] >= 97 and a[i]<=122 || a[i] >=65 and a[i] <= 90)
			cc++;
		else//including space ' '
			sc++;
		
	}
	cout << "\n\t VOWELS : " << vc << "\n\t CONSONANTS : " << cc << "\n\t SPECIAL CHARS : " << sc ;
	
	
	
	
}
