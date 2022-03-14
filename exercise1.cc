#include <iostream>

using namespace std;

void evenOdd(int a){
    a%2==0? cout<<"Tu numero es par"<<endl:
    cout<<"Tu numero es impar"<<endl;
}

int main (void){
	int a;

	cout<<"Dime un numero :  ";
	cin>>a;

	evenOdd (a);

	system ("PAUSE");
	return 0;
}