//wcpp to learn about validate a string
#include<iostream>
using namespace std;

bool validateString(char *a){
	//takes only alphabets and numbers to validate not any special chars
	for(int i=0; a[i]!='\0'; i++){
		if(!(a[i] >=65 and a[i] <= 90) and !(a[i] >=97 and a[i] <= 122) and !(a[i] >= 48 and a[i] <= 57 ))
			return false;
	}
	
	return true;
}

int main()
{
	//char a[] = "Harry7@";
	
	char a[100];
	cout << "\n\t Enter a name : ";
	cin >> a;
	
	if(validateString(a))
		cout << "\n\t VALID NAME! " << endl;
	else
		cout << "\n\t INVALID NAME!" << endl;
	
}
