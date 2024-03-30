#include <iostream>
#include <string>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese"));
	bool bFezSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;

	/* Cria as Variaveis usadas para acessar o sistema*/
	std::string SenhaAcesso = "cmaismais";
	std::string SenhaDigitada;

	/* faz o "input" dos valores da variavel SenhaDigitada*/
	std::cout << "Digite a senha de acesso: " << "\n";
	std::cin >> SenhaDigitada;

	// compara SenhaDigitada com SenhaAcesso, indicando se o acesso foi obtido ou n�o.
	if (SenhaDigitada == SenhaAcesso) {
		std::cout << "\nAcesso Garantido!" << "\n";
		bAcesso = true;
	} // afirma que, caso SenhaDigitada seja diferente de SenhaAcesso, o acesso � negado!
	else {
		std::cout << "\nAcesso Negado!" << "\n";
		system("PAUSE");
		exit(0); // cria de forma for�ada a saida do programa.
	}

	// atribui os valores das condicionais para cada variavel - true or false.
	std::cout << "\nFez Sol? (1 para Sim e 0 para N�o): ";
	std::cin >> bFezSol;

	if (bFezSol == true) {
		std::cout << "\nO Carro Est� pronto? (1 para Sim e 0 para N�o):" << "\n";
		std::cin >> bCarroPronto;
	}
	else {
		std::cout << "N�o vai dar praia!" << "\n";
		system("PAUSE");
		exit(0);
	}

	if (bCarroPronto == true) {
		std::cout << "\nO Salario foi depositado? (1 para Sim e 0 para N�o): " << "\n";
		std::cin >> bSalarioDepositado;
	}
	else {
		std::cout << "N�o vai dar praia!" << "\n";
		system("PAUSE");
		exit(0);
	}

	// usando and\E indicamos se, a condicional foi satisfeita, e iremos para praia!
	if (bAcesso == true) {
		if (bFezSol && bCarroPronto && bSalarioDepositado) {
			std::cout << "Vai dar praia!" << std::endl;
			system("PAUSE");
		}
		else {
			std::cout << "N�o vai dar praia!" << "\n";
			system("PAUSE");
			exit(0);
		}
	}
}