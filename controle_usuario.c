
/*PROCEDIMENTO PARA MANIPULAÇÃO DOS DADOS
    -RECEBER OS OBJETOS DO JSON EM UM VETOR DE USUARIOS
    -MANIPULAR OS DADOS

*/




#include "controle_usuario.h"


//ADICIONAR - Adiciona um usuario em um arquivo JSON
void adicionar_usuario(Usuarios *users);

//REMOVER - Remove um usuario em um arquivo JSON
void remover_usuario(Usuarios *users);

//ALTERAR - Altera um usuario em um arquivo JSON
void alterar_usuario(Usuarios *users);

//PESQUISAR - Pesquisa um usuario em um arquivo JSON
void pesquisar_usuario(Usuarios *users);

//CADASTRO DE USUARIOS


long int recebeCpf(){
    long int cpf;
    printf("Digite o CPF : ");
    scanf(" %li",&cpf);

    //VALIDAÇÃO DE CPF
    return cpf;
};

char *recebeNome(){
    char *nome = (char*)malloc(sizeof(char)*60);
    printf("Digite o nome : ");
    scanf(" %s",nome);
        
    
    return nome;
};

char *recebeEmail(){
    char *email = (char*)malloc(sizeof(char)*60);
    printf("Digite o E-MAIL : ");
    scanf(" %s",email);

    //VALIDAÇÃO DE EMAIL
    return email;
};

long int recebeDataNasc(){
    long int dataNasc;
    printf("Digite a data de nascimento: dd/mm/aaaa : ");
    scanf(" %li",&dataNasc);

    //VALIDAÇÃO DATA NASCIMENTO
    return dataNasc;
};

long int recebeTelefone(){
    long int telefone;
    printf("Digite o telefone: (dd)xxxx-xxxxx : ");
    scanf(" %li",&telefone);

    //VALIDAÇÃO DE TELEFONE
    return telefone;
};

char *recebeRua(){
    char *rua = (char*)malloc(sizeof(char)*60);
    printf("Digite o nome da rua : ");
    scanf(" %s",rua);

    return rua; 
};

long int recebeNumero(){
    long int numero;
    printf("Digite o numero da casa : ");
    scanf(" %li",&numero);
    return numero;
};

long int recebeCep(){
    long int cep;
    printf("Digite o cep da casa : ");
    scanf(" %li",&cep);
    //VALIDAÇÃO DE CEP
    return cep;
};

char *recebeLogin(){
    char *login = (char*)malloc(sizeof(char)*60);
    printf("Digite o login do usuario : ");
    scanf(" %s",login);
    
    //VERIFICAÇÃO DO LOGIN
    return login;
};

char *recebeSenha(){
    char *senha = (char*)malloc(sizeof(char)*60); ;
    
    printf("Digite a senha do usuario : ");
    scanf(" %s",senha);

    //MD5
    return senha;
};

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