/* Trocar cor Utilizando o comazndo System(COLOR)
e altere a cor de exibi��o da fonte no terminal de sa�da para uma cor de sua prefer�ncia.*/

#include <iostream>

 int main()
 {
	 /* Cores e letras dispon�veis:
	 0 = Preto						8 = Cinza							
	 1 = Azul						9 = Azul claro
	 3 = Verde-�gua					A = Verde claro
	 4 = Vermelho					B = Verde-�gua claro			F = Branco brilhante
	 5 = Roxo						C = Vermelho claro
	 6 = Amarelo					D = Lil�s
	 7 = Branco					    E = Amarelo claro */

	 // de 0 at� F, o 1� modifica o fundo e o segundo modifica a letra.
	 system("COLOR 4E"); // color 4 (Fundo Lil�s), seguido de E (Letra amarela)

	 std::cout << "Vamos modificar as cores deste programa " << std::endl;
	 
	 return 0;
 }