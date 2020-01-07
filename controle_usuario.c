
/*PROCEDIMENTO PARA MANIPULAÇÃO DOS DADOS
    -RECEBER OS OBJETOS DO JSON EM UM VETOR DE USUARIOS
    -MANIPULAR OS DADOS

*/



#include <stdlib.h>
#include <math.h>
#include "controle_usuario.h"


//ADICIONAR - Adiciona um usuario em um arquivo JSON
void adicionar_usuario(Usuarios *users);

//REMOVER - Remove um usuario em um arquivo JSON
void remover_usuario(Usuarios *users);

//ALTERAR - Altera um usuario em um arquivo JSON
void alterar_usuario(Usuarios *users);

//PESQUISAR - Pesquisa um usuario em um arquivo JSON
void pesquisar_usuario(Usuarios *users);


//CRIPTOGRAFIA MD5 PARA SENHAS