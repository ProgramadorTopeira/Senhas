#include "classes.hpp"
#include <iostream>
#include <string>
#include <stdlib>


Menu :: Menu (){

	std::cout << "[1]=Escrever"<< std::endl <<"[2]=Ler"<< std::endl << "opc: ";
	std::cin >> opc;
	std::system("cls");
	if (opc == 1){
		escrever();
	}else if(opc == 2){
		ler();
	}else{
		std::cout << "apenas as opcoes a cima";
	}


}


void Menu :: escrever(){

	esc.open("arc.text" , ofstream :: out | ofstream :: app );
	while (opc == 1){
		std::cout << "email : ";
		std::cin >> escrita;
		esc << "email : " << escrita << std::endl;

		std::cout << "site: ";
		std::cin >> escrita;
		esc << "site: " << escrita << std::endl;

		std::cout << "senha: ";
		std::cin >> escrita;
		esc << "senha: " << escrita << std::endl;

		std::cout << "usuario: ";
		std::cin >> escrita;
		esc << "usuario: " << escrita << std::endl;

		esc << "***********************" << std::endl;
		std::cout << "[1]=Repetir " << std::endl << "[2]=Sair" << std::endl << "opc:";
		std::cin >> opc;
		std::system("cls");
	}
	Menu();
	esc.close();

}


void Menu :: ler(){

	le.open("arc.text");
	if (le.is_open()){
		while(getline(le,escrita)){
			std::cout << escrita << std::endl;
		}
	}
