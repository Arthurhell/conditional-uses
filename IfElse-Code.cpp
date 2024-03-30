#include <iostream>
#include <string>

int main()
{
	bool bFeSol, bCarroPronto, bSalarioDepositado;
	bool bAcesso;

	/* Cria as Variaveis usadas para acessar o sistema*/
	std::string SenhaAcesso = "cmaismais";
	std::string SenhaDigitada;

	/* faz o "input" dos valores da variavel SenhaDigitada*/
	std::cout << "Digite a senha de acesso: " << "\n";
	std::cin >> SenhaDigitada;

	// compara SenhaDigitada com SenhaAcesso, indicando se o acesso foi obtido ou não.
	if (SenhaDigitada == SenhaAcesso) {
		std::cout << "\nAcesso Garantido!" << "\n";
		bAcesso = true;
		system("PAUSE");
	} // afirma que, caso SenhaDigitada seja diferente de SenhaAcesso, o acesso é negado!
	else {
		std::cout << "\nAcesso Negado!" << "\n";
		system("PAUSE");
		exit(0); // cria de forma forçada a saida do programa.
	}
}