
	//JUAN MANUEL TARIN CARRILLO 24041246

#include<time.h>
#include<windows.h>
#include<iostream>
using namespace std;
int main( )
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	int i, v1[5], v2[5], v3[5];
	for(i=0;i<5;i++)
	{
		v1[i]=rand()%11;
		v2[i]=rand()%11;
		v3[i]=v1[i]+v2[i];
		printf("v1[%d]=%2d v2[%d]=%2d v3[%d]=%3d\n",i,v1[i],i,v2[i],i,v3[i]);
	}
	cout<<"Impresion con Cout\n";
	for(i=0;i<5;i++)
	{
		cout<<"v1["<<i<<"]="<<v1[i]<<" v2["<<i<<"]="<<v2[i]<<" v3["<<i<<"]="<<v3[i]<<"\n";
	}
	
	return 0;
}
