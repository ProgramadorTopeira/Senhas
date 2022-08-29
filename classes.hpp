#include <iostream>
#include <fstream>

using namespace std;

class Menu{
	public:
		int opc = 0;
		ofstream esc;
		ifstream le;
		string escrita;
		Menu();
		void escrever();
		void ler();
	private:
};


Menu :: Menu (){

	cout << "[1]=Escrever"<< endl <<"[2]=Ler"<< endl << "opc: ";
	cin >> opc;
	system("cls");
	if (opc == 1){
		escrever();
	}else if(opc == 2){
		ler();
	}else{
		cout << "apenas as opcoes a cima";
	}


}


void Menu :: escrever(){

	esc.open("arc.text" , ofstream :: out | ofstream :: app );
	while (opc == 1){
		cout << "email : ";
		cin >> escrita;
		esc << "email : " << escrita << endl;

		cout << "site: ";
		cin >> escrita;
		esc << "site: " << escrita << endl;

		cout << "senha: ";
		cin >> escrita;
		esc << "senha: " << escrita << endl;

		cout << "usuario: ";
		cin >> escrita;
		esc << "usuario: " << escrita << endl;

		esc << "***********************" << endl;
		cout << "[1]=Repetir " << endl << "[2]=Sair" << endl << "opc:";
		cin >> opc;
		system("cls");
	}
	Menu();
	esc.close();

}


void Menu :: ler(){

	le.open("arc.text");
	if (le.is_open()){
		while(getline(le,escrita)){
			cout << escrita << endl;
		}
	}

}