#include <iostream>
#include <string>

int main()
{
	bool bFezSol, bMotoPronta, bSalarioDepositado;
	bool bAcesso;

	std::string SenhaDeAcesso = "cplusplus"; 
	std::string SenhaDigitada;

	std::cout << "Digite a senha de acesso: ";
	std::cin >> SenhaDigitada;

	/* Se a senha digitada pelo usu�tio e armazenada na vari�vel 
	SenhaDigitada for igual a senha de acesso as instru��es ap�s if
	ser�o executadas pois a condi��o foi verdadeira true 1*/
	if (SenhaDigitada == SenhaDeAcesso)
	{
		std::cout << "\n Acesso Permitido!" << "\n";
		bAcesso = true;
		system("PAUSE");
	}

	// Se a condi��o for falta ent�o as intru��es else ser�o executadas
	else
	{
		std::cout << "\n Acesso Negado!!! " << "\n";
		system("PAUSE");
		exit(0); //Sai do programa, for�a fechamento da aplica��o 
	} 
}