#ifndef CADASTRARPRODUTO_H_INCLUDED
#define CADASTRARPRODUTO_H_INCLUDED

struct Produto{
    int codigo, quantidade;
    double preco;
};
struct Produto produtos[50];

void menu();
void adicionarProduto();
void removerProduto();
void exibirPodruto();

#endif // CADASTRARPRODUTO_H_INCLUDED
