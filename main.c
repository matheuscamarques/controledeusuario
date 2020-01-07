#include <stdio.h>
#include <stdlib.h>
#include "controle_usuario.c"
//FUNÇÕES DE CADASTRO
Usuarios cadastraUsuario();
    int  *recebeCpf();
    char *recebeNome();
    char *recebeEmail();
    int  *recebeDataNasc();
    int  *recebeTelefone();
    char *recebeRua();
    int  *recebeNumero();
    int  *recebeCep();
    char *recebeLogin();
    char *recebeSenha();

//MÓDULOS
int * recebeCpf();

int main(){

    Usuarios administrador;



    return 0;


}


Usuarios cadastraUsuario(){

    //USUARIO
    Usuarios novo;
    novo.dados.cpf = recebeCpf();
    novo.dados.nome = recebeNome();
    novo.dados.email = recebeEmail();
    novo.dados.data_nascimento =  recebeDataNasc();
    novo.dados.telefone = recebeTelefone();
    novo.dados.logradouro.rua = recebeRua();
    novo.dados.logradouro.numero = recebeNumero();
    novo.dados.logradouro.cep =  recebeCep();
    novo.login = recebeLogin();
    novo.senha = recebeSenha();

    return novo;

}

//FUNÇÕES DE CADASTRO
int *recebeCpf(){
    int *cpf;
    //VALIDAÇÃO DE CPF
    return cpf;
};
char *recebeNome(){
    char *nome;
    return nome;
};
char *recebeEmail(){
    char *email;
    //VALIDAÇÃO DE EMAIL
    return email;
};
int *recebeDataNasc(){
    int *dataNasc;
    return dataNasc;
};
int *recebeTelefone(){
    int *telefone;
    //VALIDAÇÃO DE TELEFONE
    return telefone;
};
char*recebeRua(){
    char *rua;
    return rua;
};
int *recebeNumero(){
    int *numero;
    return numero;
};
int *recebeCep(){
    int *cep;
    //VALIDAÇÃO DE CEP
    return cep;
};
char *recebeLogin(){
    char *login;
    //VERIFICAÇÃO DO LOGIN
    return login;
};
char *recebeSenha(){
    char *senha;
    //MD5
    return senha;
};

