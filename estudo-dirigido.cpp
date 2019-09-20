#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// GRUPO: Erick Fillipe, Andressa Veiga, Jonas Junior!

/* !! IMPORTANTE !! Professor, eu nao consegui rodar o programa no meu computador, nao sei porque,
o codigo não deu nenhum erro na compilaçao mas ele pedia pra eu digitar um valor e depois que eu digitava o programa
acabava, não sei se o problema é no meu pc ou no compilador mas se vc achar algum erro na parte final do codigo
é porque eu não consegui rodar para testar se dava certo! Vlw proff, tomara que esteja certo hehe. */

int main(){

	int x, a, b, escolha, opcao[7] = {0, 1, 2, 3, 4, 5, 6}, soma = 0, elemento, i, div;
	vector<int> inteiro;
	string resposta;

	b = 0;
	x = 0;

	for(a = 0; a == b; a++, b++, x++){
	
		cout << "Digite um valor:\n";
		cin >> inteiro[x];
		cout << "\nGostaria de digitar mais um valor? (s ou n)\n";
		cin >> resposta;

		if (resposta == "n"){

			b++;

		} else {

			cout << "Ok\n\n";
		}
	}

	for( escolha = 1; escolha != 0; ){

		cout << "\nEscolha uma das opcoes abaixo:\n\n";
		cout << "Para sair da aplicação digite " << opcao[0] << "\n";
		cout << "Para imprimir o somatório de seus elementos digite " << opcao[1] << "\n";
		cout << "Para imprimir a média de seus elementos digite " << opcao[2] << "\n";
		cout << "Para imprimir a média e o somatório digite " << opcao[3] << "\n";
		cout << "Para substituir por zero todos os valores negativos e imprimir a média digite " << opcao[4] << "\n";
		cout << "Para substituir por zero todos os valores repetidos e imprimir a média e o somatório digite " << opcao[5] << "\n";
		cout << "Para mostrar o vetor ordenado digite " << opcao[6] << "\n\n";
		cin >> escolha;

		switch (escolha){

		case 1:

			for( x = 0; inteiro.size() > x; x++ ){

				soma = soma + inteiro[x];

			}
			
			cout << "A soma é: " << soma << "\n";
		
		break;

		case 2:

			for( x = 0; inteiro.size() > x; x++ ){

				soma = soma + inteiro[x];

			}

			div = soma/inteiro.size(); 
			
			cout << "A média é: " << div << "\n";

		break;
		
		case 3:
			
			for( x = 0; inteiro.size() > x; x++ ){

				soma = soma + inteiro[x];

			}

			div = soma/inteiro.size(); 
			
			cout << "A soma é: " << soma << "\n"; 
			cout << "A média é: " << div << "\n";
		
		break;
		
		case 4:
			
			for( x = 0; inteiro.size() > x; x++ ){

				elemento = inteiro[x];
				
				if (elemento < 0){
					
					inteiro[x] = 0;
					
				}
			
			}
			
			for( x = 0; inteiro.size() > x; x++ ){

				soma = soma + inteiro[x];

			}

			div = soma/inteiro.size(); 
			
			cout << "A média é: " << div << "\n";
			
		break;	
			
		case 5:

			for( x = 0; inteiro.size() > x; x++ ){

				elemento = inteiro[x];

				for( i = 0; inteiro.size() > i; i++){

					if (elemento == inteiro[i] && x != i){

						inteiro[x] = 0;
					
					}
				
				}

			}
			
			for( x = 0; inteiro.size() > x; x++ ){

				soma = soma + inteiro[x];

			}

			div = soma/inteiro.size(); 
			
			cout << "A soma é: " << soma << "\n"; 
			cout << "A média é: " << div << "\n";

		break;
	
		case 6:
		
			sort(inteiro.begin(), inteiro.end());
		
			cout << "A lista é:\n";
		
			for (x = 0; inteiro.size() > x; x++){
			
				cout << inteiro[x] << "\n";	
		
			}
		
		}

	}

	if (escolha == 0 ){

		return 0;
	}

	return 0;

}
