//Exercicio 1 - Crie uma struct para armazenar o nome e o telefone de uma pessoa, insira o nome usando strcpy.
//#include <stdio.h>
//#include <string.h>
//
//struct Pessoa {
//    char nome[50];
//    char telefone[15];
//};
//
//int main() {
//    struct Pessoa pessoa1;
//
//    strcpy(pessoa1.nome, "Joao");
//    strcpy(pessoa1.telefone, "123456789");
//
//    printf("Nome: %s\n", pessoa1.nome);
//    printf("Telefone: %s\n", pessoa1.telefone);
//}

//Exercicio 2 - Modifique o exercício anterior para ler o nome com scanf.

//#include <stdio.h>
//#include <string.h>
//
//struct Pessoa {
//    char nome[100];
//    char telefone[15];
//};
//
//int main() {
//    struct Pessoa pessoa1;
//
//    printf("Digite o nome: ");
//    scanf(" %[^\n]", pessoa1.nome);
//
//    printf("Digite o numero de telefone: ");
//    scanf(" %[^\n]", pessoa1.telefone);
//
//    printf("Nome: %s\n", pessoa1.nome);
//    printf("Telefone: %s\n", pessoa1.telefone);
//}

//Exercicio 3 - Crie um programa em C que preencha uma struct cliente usando scanf depois do preenchimento imprima-a
//#include <stdio.h>
//#include <string.h>
//
//struct Cliente {
//    char nome[50];
//    char endereco[100];
//    char telefone[15];
//};
//
//int main() {
//    struct Cliente cliente;
//
//    printf("Digite o nome do cliente: ");
//    scanf(" %[^\n]", cliente.nome);
//
//    printf("Digite o endereco do cliente: ");
//    scanf(" %[^\n]", cliente.endereco);
//
//    printf("Digite o telefone do cliente: ");
//    scanf(" %[^\n]", cliente.telefone);
//
//    printf("\nDados do cliente:\n");
//    printf("Nome: %s\n", cliente.nome);
//    printf("Endereco: %s\n", cliente.endereco);
//    printf("Telefone: %s\n", cliente.telefone);
//}

//Exercicio 4 - Crie um programa em C que preencha uma struct CADASTRO com duas subtructs ENDERECO (comercial e residencial) usando scanf, depois do preenchimento imprima a matriz e todo seu conteúdo.

//#include <stdio.h>
//
//struct ENDERECO {
//    char rua[50];
//    char cidade[50];
//    char estado[3];
//};
//
//struct CADASTRO {
//    struct ENDERECO comercial;
//    struct ENDERECO residencial;
//};
//
//int main() {
//    struct CADASTRO cadastro;
//
//    printf("=== Preenchendo o endereco comercial ===\n");
//    printf("Digite a rua: ");
//    scanf(" %[^\n]", cadastro.comercial.rua);
//    printf("Digite a cidade: ");
//    scanf(" %[^\n]", cadastro.comercial.cidade);
//    printf("Digite o estado (abreviado): ");
//    scanf(" %[^\n]", cadastro.comercial.estado);
//
//    printf("\n=== Preenchendo o endereco residencial ===\n");
//    printf("Digite a rua: ");
//    scanf(" %[^\n]", cadastro.residencial.rua);
//    printf("Digite a cidade: ");
//    scanf(" %[^\n]", cadastro.residencial.cidade);
//    printf("Digite o estado (abreviado): ");
//    scanf(" %[^\n]", cadastro.residencial.estado);
//
//    printf("\n=== Conteudo do cadastro ===\n");
//    printf("Endereco comercial:\n");
//    printf("Rua: %s\n", cadastro.comercial.rua);
//    printf("Cidade: %s\n", cadastro.comercial.cidade);
//    printf("Estado: %s\n", cadastro.comercial.estado);
//    printf("\nEndereco residencial:\n");
//    printf("Rua: %s\n", cadastro.residencial.rua);
//    printf("Cidade: %s\n", cadastro.residencial.cidade);
//    printf("Estado: %s\n", cadastro.residencial.estado);
//}


