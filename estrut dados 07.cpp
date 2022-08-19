#include <iostream>
using namespace std;
void imprime_Vetor(int *pilha, int tam){
for(int i=0;i<tam; i++){
cout << pilha[i] <<"-";
}
cout << "\n\n";
}
void push(int *topo, int *pilha, int tam, int x){
if(*topo == tam-1){
cout << "Não foi possivel adicionar o valor. Pilha cheia!\n";
}else{
*topo=*topo+1;
pilha[*topo]=x;
}
}
void pop(int *topo, int *pilha, int tam){
if(*topo == -1){
cout << "A pilha esta vazia!!\n\n";
}else{
cout << "Valor removido:"<< pilha[*topo] << "\n\n";
pilha[*topo]=0;
*topo=*topo-1;
}
}
void sair(){
cout << "Encerrando a execucao do programa!!\n\n";
}
int main()
{
int tam, x, opt;
int topo=-1;
cout << "Informe o numero de elementos do vetor: ";
cin >> tam;
int *pilha=new int[tam];
do{
cout <<"----------------------------------"<< endl;
cout <<"MENU "<< endl;
cout <<"----------------------------------"<< endl;
cout << "1. EMPILHAR"<< endl;
cout << "2. DESEMPILHAR"<< endl;
cout << "0. SAIR "<< endl;
cout <<"----------------------------------"<<endl;
cin >> opt;
switch(opt){
case 0:
sair();
break;
case 1:
cout << "Informe o valor a ser empilhado: ";
cin >> x;
push(&topo, pilha, tam, x);
imprime_Vetor(pilha, tam);
break;
case 2:
pop(&topo, pilha, tam);
imprime_Vetor(pilha, tam);
break;
default:
cout << "Opção invalida!"<< endl;
}
}while(opt != 0);
return 0;
}
