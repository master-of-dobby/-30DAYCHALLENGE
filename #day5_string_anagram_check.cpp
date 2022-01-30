#include<iostream>
using namespace std;

void anagram(char *a, char *b){
	int h[26] = {0};
	int i;
	
	for(i=0; a[i]!='\0'; i++)
		h[a[i]-97]++;
		
	for(i=0; b[i]!='\0'; i++)
		h[b[i]-97]--;
	
	for(i=0; i<26; i++){
		if(h[i]<0){
			cout << "\n\tNOT AN ANAGRAM " << endl;
			return;
		}
	}
	cout << "\n\t ANAGRAM" << endl;
	
}

int main()
{
	char a[100] ;// = "medicall";
	char b[100] ;// = "decimal";
	cout << "\n\t Enter the first string : ";
	cin >> a;
	cout << "\n\t Enter the second string : ";
	cin >> b;
	
	
	anagram(a, b);
	
	return 0;
}
