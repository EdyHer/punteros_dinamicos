#include <iostream>
using namespace std;

main(){
	int edad=25,*p_edad;
	p_edad = &edad;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;
	
	cout<<"-------cambiar valores-------"<<endl;
	*p_edad=40;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;
	
	cout<<"-------otra variable a p_edad valores-------"<<endl;
	int edad2=100;
	p_edad= &edad2;
	
	cout<<"variable edad:"<<edad<<endl;
	cout<<"puntero edad:"<<*p_edad<<endl;	
	
	system("pause");
	
}
