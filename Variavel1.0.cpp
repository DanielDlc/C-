// 14 de setembro de 2020
// Daniel Louro Costa

#include <iostream>
#include <tchar.h>

int main()
{
	_tsetlocale(LC_ALL, _T("portuguese")); // configurar o console para exibir acentos de palavras

	// Declara��o de vari�veis
	// Primeiro colocar o tipo de vari�vel, neste caso escolhemos int (tamb�m podemos executar como: int NumVidas, Pontuacao; na mesma linha.
	/* quando atribuimos uma vari�vel, pedimos ao computador um local na mem�ria RAM com o tamanho suficiente para armazenar
	um n�mero inteiro (int) e colocar nome deste local como (NumVidas e Pontuacao) observe que a vari�vel n�o deve ser acentuada.*/
	int NumVidas = 5; // Indicando que o programa ir� alocar um local um espa�o mem�ria so tipo inteiro e colocar o valor 5   
	int Pontuacao = 1350; // Indicando que o programa ir� alocar um local um espa�o mem�ria so tipo inteiro e colocar o valor 1350
	
	std::cout << "*********INICIO DO JOGO*********" << std::endl;
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;

	std::cout << "Tamanho da Vari�vel Numvidas " << sizeof(NumVidas) << "Bytes" << std::endl; // sizeof mostra o tamanh� em bytes da vari�vel.
	std::cout << "Tamanho da Vari�vel Pontuacao " << sizeof(Pontuacao) << "Bytes" << std::endl;

	std::cout << "Endere�o que Numvidas Ocupa na Mem�ria RAM: " << &NumVidas << "\n";  // & antes da vari�vel mostra o local ocupado na mem�ria.
	std::cout << "Endere�o que Pontua��o Ocupa na mem�ria Ram: " << &Pontuacao << "\n"; 
	std::cout << "********************************" << std::endl;

	std::cout << "*********DURANTE O JOGO*********" << std::endl;

	// Ir� acrescentar um valor na regi�o de mem�ria rotulada como Pontua��o (Pontua��o = Pontua��o + 150) 
	// Ir� decrescer um valor na regi�o de mem�ria rotulada como NumVidas (NumVidas = Numvidas - 1)
	Pontuacao += 150; //Pontua��o = (1350 - 150)
	NumVidas -= 1; // NumVidas = (5 - 1)
	std::cout << "Vidas Jogador: " << NumVidas << std::endl;
	std::cout << "Pontua��o: " << Pontuacao << std::endl;
	std::cout << "********************************" << std::endl;

	return 0;
}