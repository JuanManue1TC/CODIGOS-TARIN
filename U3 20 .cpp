
	//JUAN MANUEL TARIN CARRILLO 24041246

#include <iostream>
#include<Windows.h>
using namespace std;
int main(){	
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	
	int nip=123;
	int intento=0;
	cout<<"Teclea tu NIP: ";
	cin>>intento;
	if(intento==nip)
	{
		printf("**Correcto**");
	}
	
	return 0;
} 
