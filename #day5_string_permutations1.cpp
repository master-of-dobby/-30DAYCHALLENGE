#include<iostream>
using namespace std;
int C=0;

void permutations(string s, int k){
	static int a[10]={0};
	static char res[10];
	int i;
	
	if(s[k]=='\0'){
		res[k] = 0;
		cout << res << endl;
		C++;
	}
	else{
		for(i=0; s[i]!='\0'; i++){
			if(a[i]==0){
				res[k] = s[i];
				a[i] = 1;
				permutations(s, k+1);
				a[i] = 0;
			}
		}
	}
	
}

int main()
{
	string a;
	cout << "\n\t Enter the string : ";
	cin >> a;
	
	permutations(a,0);
	
	cout << "\n\t TOTAL PERMUTATIONS : " << C;
	
	return 0;
}
