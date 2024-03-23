#include <iostream>
using namespace std;

main(){
	int fil = 0, col=0,**pm_notas;
	cout<<"ingrese la cantidad estudiantes:";
	cin>>fil;
	cout<<"ingrese la cantidad notas por estudiante:";
	cin>>col;
	
	pm_notas = new int *[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i] = new int[col];
	}
	for (int i=0;i<fil;i++) {
		for (int ii=0;ii<col;ii++) {
			cout<<"estudiante"<<i<<", nota:"<<ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
		}
	}
	cout<<"________________________"<<endl;
	system("pause");
}
