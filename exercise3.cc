#include <iostream>

using namespace std;

void multiply(int num){
	for(int a = 1 ; a <= 10 ; a++){
		cout<< num * a << endl;
	}
}
int	main(void){
	int num;
	cout<< "Dame un numero :  ";
	cin>>num;

	multiply(num) ;
	
	system("PAUSE");
	return 0;
}