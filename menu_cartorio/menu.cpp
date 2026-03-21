#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca alocação de espaço em memória
#include <locale.h> //biblioteca de alocação de texto por região 

int main() 
{
    setlocale(LC_ALL, "Portugues");
    
    printf("### Cartorio da EBAC ###\n\n");
    printf("Escolha a opção desejada do menu:\n\n");
    printf("\t1 - Registrar nomes\n");
    printf("\t2 - Consultar nomes\n");
    printf("\t3 - Deletar nomes\n\n");
    
    printf("Esse software e de livre uso dos alunos");
}
    
