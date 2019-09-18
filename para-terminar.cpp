#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int  x, a, b, escolha, opcao[7] = {0, 1, 2, 3, 4, 5, 6}, soma = 0, elemento, i, div;
vector<int> inteiro:
string resposta;
b=0;
for(a = 0; a == b; a++, b++){
cout <<"Digite um valor:\n";
cin >> inteiro[x];
cout << "Gostaria de digitar mais um valor? (s ou n)\n";
cin >> resposta;
if (resposta == "n"){
b++;
} else {
cout << "Ok\n";
}
}
//sort(opcao.begin(), opcao.end());
//sort(inteiro.begin(), inteiro.end());
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
break;
case 2:
for( x = 0; inteiro.size() > x; x++ ){
soma = soma + inteiro[x];
}
div = soma / inteiro.size;
case 5:
for( x = 0; inteiro.size() > x; x++ ){
elemento = inteiro[x];
for( i = 0; inteiro.size() > x; i++){
if (elemento == inteiro[i] && x != i){
inteiro[x] = 0;
}
}
}
break;
}
if (escolha == 0 ){
return 0;
}
}
