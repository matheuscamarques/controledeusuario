struct usuarios
{
    Pessoas dados;
    char *login;
    char *senha;

}typedef Usuarios;

struct pessoas
{
    int *cpf;
    char *-nome;
    char *email;
    int *data_nascimento;
    int * telefone;
    Endereco logradouro;
}typedef Pessoas;

struct endereco
{
    char* rua;
    int* numero;
    int* cep;
     
}typedef Endereco;