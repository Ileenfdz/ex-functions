#include <iostream>

using namespace std;

int changeNum (int num){
	num = num + 7;
	return num;
}

int main(int){
	int num;

	cout<< "Dame un numero :  ";
	cin>>num;
	num = changeNum(num);

	cout<<num<< endl;

	system("PAUSE");
	return 0;
}