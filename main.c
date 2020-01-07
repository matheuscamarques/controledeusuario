#include "controle_usuario.c"




int main(){

    Usuarios administrador;

    administrador = cadastraUsuario();


    printf("\n");
    printf("%li \n",administrador.dados.cpf);
    printf("%s \n ",administrador.dados.nome);



    return 0;


}



