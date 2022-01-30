#include<iostream>
using namespace std;
int C=0;

void permutations(string a, int l, int r){
	int i;
	
	if(l==r){
		cout << a << endl;
		C++;
	}
	else{
		
		for(i=l; i<=r ;i++){
			
			swap(a[l], a[i]);
			
			permutations(a, l+1, r);
			
			swap(a[l], a[i]);
		}
		
	}
	
	
	
}

int main()
{
	string a;
	cout << "\n\t Enter the string : ";
	cin >> a;
	int k=0;
	k = a.length()-1;
	
	permutations(a, 0, k);
	
	cout << "\n\t TOTAL PERMUTATIONS : " << C;
	
	return 0;
}
