// TiposDeDados.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	cout << "Estrutura de Dados - Fatec (2026/2)" << endl;

	
	cout << "Tipos Numericos\n";
	cout << "===============\n";
	
	int i = 10;
	short s = 18;
	long l = 200000;
	float f = 1.97F;
	double  d = 4.73;
	cout << "Inteiros\n";
	cout << "  int i = " << i << " ocupa " << sizeof(i) << " bytes\n";
	cout << "short s = " << s << " ocupa " << sizeof(s) << " bytes\n";
	cout << "long  l = " << l << " ocupa " << sizeof(l) << " bytes\n\n";
	cout << "Ponto Flutuante (Reais)\n";
	cout << " float f = " << f << " ocupa " << sizeof(f) << " bytes\n";
	cout << "double d = " << d << " ocupa " << sizeof(d) << " bytes\n";

	cout << "\nTipo logico (boolean)\n";
	cout << "====================\n";
	bool flFacil = false;
	cout << "bool flFacil = " << flFacil << " ocupa " << sizeof(flFacil) << " bytes\n";

	cout << "\nTipo caracter\n";
	cout << "=============\n";
	char letra = 'Z';
	cout << "char letra = " << letra << " ocupa " << sizeof(letra) << " bytes\n";

	cout << "\nTipo string\n";
	cout << "===========\n";
	string texto = "Estrutura de Dados vai ser moleza!";
	cout << "string texto = \"" << texto << "\" ocupa " << sizeof(texto) << " bytes\n";

	cout << "\nPonteiros\n";
	cout << "===========\n";
	string* ponteiro = &texto;
	cout << "Para a variavel 'texto' do exemplo acima: string* ponteiro = &texto\nO endereco da memoria onde o valor foi armazenado (ponteiro)  = " << ponteiro << endl;
	cout << "O valor armazenado no local indicado pelo ponteiro e *ponteiro = \"" << *ponteiro << "\"";

	cout << endl << endl;

	cout << "Qualquer tecla para continuar...";
	system("pause"); // somente no Windows
	system("cls");

	cout << "Entrada de Dados" << endl;
	cout << "================" << endl;
	string nome = "";
	int idade = 0;
	int dias = 0;
	int horas = 0;
	int minutos = 0;

	cout << "Digite seu nome: ";
	cin >> nome;
	cout << "Digite sua idade: ";
	cin >> idade;
	dias = idade * 365;
	horas = dias * 24;
	minutos = horas  * 60;
	cout << "Sua idade em dias e: " << dias << endl;
	cout << "Sua idade em horas e: " << horas << endl;
	cout << "Sua idade em minutos e: " << minutos << endl;

	cout << endl << endl;

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows
	system("cls");


	//Exercicio 2

	cout << "Conversao de Temperatura" << endl;
	cout << "================" << endl;

	double  temperatura = 0;
	double fahrenheit = 0;
	double kelvin = 0;

	cout << "Digite a temperatura em celsius: ";
	cin >> temperatura;
	fahrenheit = temperatura * 1.8 + 32;
	cout << "Sua temperatura em Fahrenheit e: " << fahrenheit << endl;
	kelvin = temperatura + 273.15;
	cout << "Sua temperatura em Kelvin e: " << kelvin << endl;

	cout << endl << endl;

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows
	system("cls");

	//Exercicio 3

	cout << "Conversao de Segundos" << endl;
	cout << "================" << endl;

	long segundo = 0;
	long dia = 0;
	long hora = 0;
	long minuto = 0;
	long segundosRest = 0;

	cout << "Digite os segundos: ";
	cin >> segundo;
	
  	minuto = segundo / 60;
    segundosRest = segundos % 60;
    hora = minuto / 60;
    dia = hora / 24;

    cout << "Dias: " << dia << endl;
    cout << "Horas: " << hora << endl;
    cout << "Minutos: " << minuto << endl;
    cout << "Segundos restantes: " << segundosRest << endl;
	

	cout << endl << endl;

	cout << "Qualquer tecla para sair...";
	system("pause"); // somente no Windows
	system("cls");










}

