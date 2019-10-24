#include <iostream>
#include <math.h>
#include<conio.h>
#include<vector>
#include<array>
#include<string>
using namespace std;
int seleccion;
void octal(int x)
{
	if (x > 7)
	{
		octal(x / 8);
	}
	cout << x % 8;
}
vector <string> bina;
vector <string> resul;

int main()
{
	int par;
	string resus, repu;
	int numero, digito, posicion = 0, resultado = 0, vector[] = { 1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768 };
	cout << "Bienvenido al conversor binario";
	cout << "Que conversion desea realizar?" << endl;
	cout << "1=Binario a decimal" << endl;
	cout << "2=Binario a Octal" << endl;
	cout << "3=Binario a Hexadecimal" << endl;
	cout << "4=Decimal a Binario" << endl;
	cout << "5=Texto a Binario" << endl;
	cout << "6=salir" << endl;
	cin >> seleccion;
	switch (seleccion)
	{
	case 1:
		cout << "usted a escogido la opcion para convertir de binario a decimal" << endl;
		cout << "ingrese su codigo binario: ";
		cin >> numero;
		while (numero > 0)
		{
			digito = numero % 10;
			if (digito == 1)
			{
				resultado = resultado + vector[posicion];
			}
			posicion++;
			numero = numero / 10;
		}
		cout << "tu numero en decimal es " << resultado;

		break;
	case 2:
		cout << "has seleccionado la opcion para convertir de binario a octal" << endl;
		cout << "ingresa el codigo en binario que quieres convertir: " << endl;
		cin >> numero;
		while (numero > 0)
		{
			digito = numero % 10;
			if (digito == 1)
			{
				resultado = resultado + vector[posicion];
			}
			posicion++;
			numero = numero / 10;
		}
		int n;
		octal(resultado);
		break;
	case 3:
		cout << "¿Cuantos pares de 4 digitos tiene tu codigo?: ";
		cin >> par;
		for (int i = 0; i < par; i++) {
			cout << i + 1 << ": " << "Ingresa 4 digitos de tu codigo: ";
			cin >> repu;
			bina.push_back(repu);
			if (bina[i] == "0000") {
				resul.push_back("0");
			}
			if (bina[i] == "0001") {
				resul.push_back("1");
			}
			if (bina[i] == "0010") {
				resul.push_back("2");
			}
			if (bina[i] == "0011") {
				resul.push_back("3");
			}
			if (bina[i] == "0100") {
				resul.push_back("4");
			}
			if (bina[i] == "0101") {
				resul.push_back("5");
			}
			if (bina[i] == "0110") {
				resul.push_back("6");
			}
			if (bina[i] == "0111") {
				resul.push_back("7");
			}
			if (bina[i] == "1000") {
				resul.push_back("8");
			}
			if (bina[i] == "1001") {
				resul.push_back("9");
			}
			if (bina[i] == "1010") {
				resul.push_back("A");
			}
			if (bina[i] == "1011") {
				resul.push_back("B");
			}
			if (bina[i] == "1100") {
				resul.push_back("C");
			}
			if (bina[i] == "1101") {
				resul.push_back("D");
			}
			if (bina[i] == "1110") {
				resul.push_back("E");
			}
			if (bina[i] == "1111") {
				resul.push_back("F");
			}
			resus = resus + resul[i];
		}
		cout << resus;
		break;

	case 4:

		cout << "introducir numero a convertir en binario:";
		cin >> numero;

		if (numero >= 65536)
		{
			numero = numero - 65536;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 32768)
		{
			numero = numero - 32768;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 16384)
		{
			numero = numero - 16384;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 8192)
		{
			numero = numero - 8192;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 4096)
		{
			numero = numero - 4096;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 2048)
		{
			numero = numero - 2048;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 1024)
		{
			numero = numero - 1024;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 512)
		{
			numero = numero - 512;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 256)
		{
			numero = numero - 256;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 128)
		{
			numero = numero - 128;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 64)
		{
			numero = numero - 64;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 32)
		{
			numero = numero - 32;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 16)
		{
			numero = numero - 16;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 8)
		{
			numero = numero - 8;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 4)
		{
			numero = numero - 4;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 2)
		{
			numero = numero - 2;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		if (numero >= 1)
		{
			numero = numero - 1;
			cout << "1";
		}
		else
		{
			cout << "0";
		}
		break;

	case 5:


		cout << "Cuantos caracteres contiene su texto?: ";
		cin >> par;
		for (int i = 0; i < par; i++) {
			cout << i + 1 << ": " << "Ingrese su texto ";
			cin >> repu;
			bina.push_back(repu);
			if (bina[i] == "A") {
				resul.push_back("01000001 ");
			}
			if (bina[i] == "B") {
				resul.push_back("01000010 ");
			}
			if (bina[i] == "C") {
				resul.push_back("01000011 ");
			}
			if (bina[i] == "D") {
				resul.push_back("01000100 ");
			}
			if (bina[i] == "E") {
				resul.push_back("01000101 ");
			}
			if (bina[i] == "F") {
				resul.push_back("01000110 ");
			}
			if (bina[i] == "G") {
				resul.push_back("01000110 ");
			}
			if (bina[i] == "H") {
				resul.push_back("01001000 ");
			}
			if (bina[i] == "I") {
				resul.push_back("01001001 ");
			}
			if (bina[i] == "J") {
				resul.push_back("01001010 ");
			}
			if (bina[i] == "K") {
				resul.push_back("01001011 ");
			}
			if (bina[i] == "L") {
				resul.push_back("01001100 ");
			}
			if (bina[i] == "M") {
				resul.push_back("01001101 ");
			}
			if (bina[i] == "N") {
				resul.push_back("01001110 ");
			}
			if (bina[i] == "O") {
				resul.push_back("01001111 ");
			}
			if (bina[i] == "P") {
				resul.push_back("01010000 ");
			}
			if (bina[i] == "Q") {
				resul.push_back("01010001 ");
			}
			if (bina[i] == "R") {
				resul.push_back("01010010 ");
			}
			if (bina[i] == "S") {
				resul.push_back("01010011 ");
			}
			if (bina[i] == "T") {
				resul.push_back("01010100 ");
			}
			if (bina[i] == "U") {
				resul.push_back("01010101 ");
			}
			if (bina[i] == "V") {
				resul.push_back("01010110 ");
			}
			if (bina[i] == "W") {
				resul.push_back("01010111 ");
			}
			if (bina[i] == "X") {
				resul.push_back("01011000 ");
			}
			if (bina[i] == "Y") {
				resul.push_back("01011001 ");
			}
			if (bina[i] == "Z") {
				resul.push_back("01011010 ");
			}
			if (bina[i] == "a") {
				resul.push_back("01100001 ");
			}
			if (bina[i] == "b") {
				resul.push_back("01100010 ");
			}
			if (bina[i] == "c") {
				resul.push_back("01100011 ");
			}
			if (bina[i] == "d") {
				resul.push_back("01100100 ");
			}
			if (bina[i] == "e") {
				resul.push_back("01100101 ");
			}
			if (bina[i] == "f") {
				resul.push_back("01100110 ");
			}
			if (bina[i] == "g") {
				resul.push_back("01100111 ");
			}
			if (bina[i] == "h") {
				resul.push_back("01101000 ");
			}
			if (bina[i] == "i") {
				resul.push_back("01101001 ");
			}
			if (bina[i] == "j") {
				resul.push_back("01101010 ");
			}
			if (bina[i] == "k") {
				resul.push_back("01101011 ");
			}
			if (bina[i] == "l") {
				resul.push_back("01101100 ");
			}
			if (bina[i] == "m") {
				resul.push_back("01101101 ");
			}
			if (bina[i] == "n") {
				resul.push_back("01101110 ");
			}
			if (bina[i] == "o") {
				resul.push_back("01101111 ");
			}
			if (bina[i] == "p") {
				resul.push_back("01110000 ");
			}
			if (bina[i] == "q") {
				resul.push_back("01110001 ");
			}
			if (bina[i] == "r") {
				resul.push_back("01110010 ");
			}
			if (bina[i] == "s") {
				resul.push_back("01110011 ");
			}
			if (bina[i] == "t") {
				resul.push_back("01110100 ");
			}
			if (bina[i] == "u") {
				resul.push_back("01110101 ");
			}
			if (bina[i] == "v") {
				resul.push_back("01110110 ");
			}
			if (bina[i] == "w") {
				resul.push_back("01110111 ");
			}
			if (bina[i] == "x") {
				resul.push_back("01111000 ");
			}
			if (bina[i] == "y") {
				resul.push_back("01111001 ");
			}
			if (bina[i] == "z") {
				resul.push_back("01111010 ");
			}
			resus = resus + resul[i];
		}
		cout << resus;

		break;
	case 6:
	default:
		cout << "Usted ingreso un caracter no valido ";
		break;
	}
}