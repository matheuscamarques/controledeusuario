
/*PROCEDIMENTO PARA MANIPULAÇÃO DOS DADOS
    -RECEBER OS OBJETOS DO JSON EM UM VETOR DE USUARIOS
    -MANIPULAR OS DADOS

*/
#include <stdlib.h>
#include <math.h>
#include <stdio.h>

typedef  struct endereco
{
    char* rua;
    long int numero;
    long int cep;
     
}Endereco;

typedef  struct pessoas
{
    long int  cpf;
    char *nome;
    char *email;
    long int data_nascimento;
    long int telefone;
    Endereco logradouro;
}Pessoas;

typedef  struct usuarios
{
    Pessoas dados;
    char *login;
    char *senha; //Antes de salvar a senha deve ser convertida para MD5

}Usuarios;





//ADICIONAR - Adiciona um usuario em um arquivo JSON
void adicionar_usuario(Usuarios *users);

//REMOVER - Remove um usuario em um arquivo JSON
void remover_usuario(Usuarios *users);

//ALTERAR - Altera um usuario em um arquivo JSON
void alterar_usuario(Usuarios *users);

//PESQUISAR - Pesquisa um usuario em um arquivo JSON
void pesquisar_usuario(Usuarios *users);


//CRIPTOGRAFIA MD5 PARA SENHAS


//CADASTRO DE USUARIO
Usuarios cadastraUsuario();
    long int  recebeCpf();
    char      *recebeNome();
    char      *recebeEmail();
    long int  recebeDataNasc();
    long int  recebeTelefone();
    char      *recebeRua();
    long int  recebeNumero();
    long int  recebeCep();
    char      *recebeLogin();
    char      *recebeSenha();