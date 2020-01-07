
/*PROCEDIMENTO PARA MANIPULAÇÃO DOS DADOS
    -RECEBER OS OBJETOS DO JSON EM UM VETOR DE USUARIOS
    -MANIPULAR OS DADOS

*/

typedef  struct endereco
{
    char* rua;
    int* numero;
    int* cep;
     
}Endereco;

typedef  struct pessoas
{
    int *cpf;
    char *nome;
    char *email;
    int *data_nascimento;
    int * telefone;
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