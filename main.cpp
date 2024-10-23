#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
	int dia, mes, ano;
    string meses[] = {"janeiro", "fevereiro", "março", "abril", "maio", "junho", 
                      "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mês: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    if (mes >= 1 && mes <= 12) {
        cout << dia << " de " << meses[mes - 1] << " de " << ano << endl;
    } else {
        cout << "Mês inválido!" << endl;
    }

    return 0;
}
