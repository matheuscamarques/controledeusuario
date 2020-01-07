#include "controle_usuario.h"


int main(){

    Usuarios administrador;

    administrador = cadastraUsuario();


    printf("\n ");
    printf("CPF: %li \n ",administrador.dados.cpf);
    printf("NUMERO:%s \n ",administrador.dados.nome);
    printf("NOME:%li \n ",administrador.dados.telefone);
    printf("DATA NASCIMENTO:%li \n ",administrador.dados.data_nascimento);
    printf("EMAIL:%s \n ",administrador.dados.email);

    printf("CEP:%li \n ",administrador.dados.logradouro.cep);
    printf("RUA: %s \n ",administrador.dados.logradouro.rua);
    printf("NUMERO: %li \n ",administrador.dados.logradouro.numero);
    
    printf("LOGIN: %s \n ",administrador.login);
    printf("SENHA: %s \n ",administrador.senha);

     printf("\n"); 
 

}



