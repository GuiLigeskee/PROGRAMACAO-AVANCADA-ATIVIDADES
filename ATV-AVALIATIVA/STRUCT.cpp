//Exercicio 1 - Crie uma struct para armazenar o nome e o telefone de uma pessoa, insira o nome usando strcpy.
#include <stdio.h>
#include <string.h>
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

//Exercicio 3 -Crie um vetor com 5 structs CADASTRO com duas subtructs ENDERECO (comercial e residencial), preencha cada um com scanf e depois imprima. Importante que existam dois loops distintos, um para o preenchimento e outro para a impressão.

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
//    struct CADASTRO cadastros[5];
//
//    printf("=== Preenchimento dos cadastros ===\n");
//    for (int i = 0; i < 5; i++) {
//        printf("\nCadastro %d:\n", i+1);
//
//        printf("Preenchendo o endereco comercial:\n");
//        printf("Digite a rua: ");
//        scanf(" %[^\n]", cadastros[i].comercial.rua);
//        printf("Digite a cidade: ");
//        scanf(" %[^\n]", cadastros[i].comercial.cidade);
//        printf("Digite o estado (abreviado): ");
//        scanf(" %[^\n]", cadastros[i].comercial.estado);
//
//        printf("\nPreenchendo o endereco residencial:\n");
//        printf("Digite a rua: ");
//        scanf(" %[^\n]", cadastros[i].residencial.rua);
//        printf("Digite a cidade: ");
//        scanf(" %[^\n]", cadastros[i].residencial.cidade);
//        printf("Digite o estado (abreviado): ");
//        scanf(" %[^\n]", cadastros[i].residencial.estado);
//    }
//
//    printf("\n=== Impressao dos cadastros ===\n");
//    for (int i = 0; i < 5; i++) {
//        printf("\nCadastro %d:\n", i+1);
//        printf("Endereco comercial:\n");
//        printf("Rua: %s\n", cadastros[i].comercial.rua);
//        printf("Cidade: %s\n", cadastros[i].comercial.cidade);
//        printf("Estado: %s\n", cadastros[i].comercial.estado);
//        printf("\nEndereco residencial:\n");
//        printf("Rua: %s\n", cadastros[i].residencial.rua);
//        printf("Cidade: %s\n", cadastros[i].residencial.cidade);
//        printf("Estado: %s\n", cadastros[i].residencial.estado);
//    }
//}


//Exercicio 4 - Crie duas structs CORRESPONDECIA (com CEP, rua, numero, bairro, cidade, estado, uma será chamada de A e outra de B. Preencha os dados da A, copie os dados para a struct B e imprima a struct B.
//#include <stdio.h>
//#include <string.h>
//
//struct CORRESPONDENCIA {
//    char CEP[10];
//    char rua[50];
//    int numero;
//    char bairro[50];
//    char cidade[50];
//    char estado[3];
//};
//
//int main() {
//    struct CORRESPONDENCIA A;
//
//    printf("=== Preenchimento dos dados da correspondencia A ===\n");
//    printf("Digite o CEP: ");
//    scanf("%s", A.CEP);
//    printf("Digite a rua: ");
//    scanf(" %[^\n]", A.rua);
//    printf("Digite o numero: ");
//    scanf("%d", &A.numero);
//    printf("Digite o bairro: ");
//    scanf(" %[^\n]", A.bairro);
//    printf("Digite a cidade: ");
//    scanf(" %[^\n]", A.cidade);
//    printf("Digite o estado (abreviado): ");
//    scanf("%s", A.estado);
//
//    struct CORRESPONDENCIA B;
//    strcpy(B.CEP, A.CEP);
//    strcpy(B.rua, A.rua);
//    B.numero = A.numero;
//    strcpy(B.bairro, A.bairro);
//    strcpy(B.cidade, A.cidade);
//    strcpy(B.estado, A.estado);
//
//    printf("\n=== Dados da correspondencia B (copiados da correspondencia A) ===\n");
//    printf("CEP: %s\n", B.CEP);
//    printf("Rua: %s\n", B.rua);
//    printf("Numero: %d\n", B.numero);
//    printf("Bairro: %s\n", B.bairro);
//    printf("Cidade: %s\n", B.cidade);
//    printf("Estado: %s\n", B.estado);
//}

//Exercicio 5 - Crie um vetor com 5 structs CADASTRO (com nome e idade), cadastre os dados em um loop, em um segundo loop busque a sctruct que tem a maior idade e imprima.
//#include <stdio.h>
//#include <string.h>
//
//struct CADASTRO {
//    char nome[50];
//    int idade;
//};
//
//int main() {
//    struct CADASTRO cadastros[5];
//
//    printf("=== Preenchimento dos cadastros ===\n");
//    for (int i = 0; i < 5; i++) {
//        printf("\nCadastro %d:\n", i + 1);
//        printf("Digite o nome: ");
//        scanf(" %[^\n]", cadastros[i].nome);
//        printf("Digite a idade: ");
//        scanf("%d", &cadastros[i].idade);
//    }
//
//    int maior_idade = cadastros[0].idade;
//    int indice_maior_idade = 0;
//    for (int i = 1; i < 5; i++) {
//        if (cadastros[i].idade > maior_idade) {
//            maior_idade = cadastros[i].idade;
//            indice_maior_idade = i;
//        }
//    }
//
//    printf("\n=== Cadastro com maior idade ===\n");
//    printf("Nome: %s\n", cadastros[indice_maior_idade].nome);
//    printf("Idade: %d\n", cadastros[indice_maior_idade].idade);
//}

//Exercicio 6 - Faça um programa em C que preencha um vetor de struct com a seguinte estrutura:
//Nome
//Cargo
//Telefone
//e-mail
//Salário
//
//O programa devera:
//a) Cadastrar 5 funcionários, um após o outro.
//b) Imprimir o total dos salários de todos os funcionários
//c) Informar qual o funcionário que possui o maior salário
//d) Informar se algum funcionário está com o numero de telefone em branco


//#include <stdio.h>
//#include <string.h>
//
//struct FUNCIONARIO {
//    char nome[50];
//    char cargo[50];
//    char telefone[15];
//    char email[50];
//    float salario;
//};
//
//int main() {
//    struct FUNCIONARIO funcionarios[5];
//
//    float total_salarios = 0;
//
//    int indice_maior_salario = 0;
//
//    int telefone_em_branco = 0;
//
//    printf("=== Cadastro de funcionarios ===\n");
//    for (int i = 0; i < 5; i++) {
//        printf("\nFuncionario %d:\n", i + 1);
//        printf("Nome: ");
//        scanf(" %[^\n]", funcionarios[i].nome);
//        printf("Cargo: ");
//        scanf(" %[^\n]", funcionarios[i].cargo);
//        printf("Telefone: ");
//        scanf(" %[^\n]", funcionarios[i].telefone);
//        printf("Email: ");
//        scanf(" %[^\n]", funcionarios[i].email);
//        printf("Salario: ");
//        scanf("%f", &funcionarios[i].salario);
//
//        total_salarios += funcionarios[i].salario;
//
//        if (funcionarios[i].salario > funcionarios[indice_maior_salario].salario) {
//            indice_maior_salario = i;
//        }
//
//        if (strlen(funcionarios[i].telefone) == 0) {
//            telefone_em_branco = 1;
//        }
//    }
//
//    printf("\nTotal dos salarios de todos os funcionarios: %.2f\n", total_salarios);
//
//    printf("Funcionario com maior salario:\n");
//    printf("Nome: %s\n", funcionarios[indice_maior_salario].nome);
//    printf("Cargo: %s\n", funcionarios[indice_maior_salario].cargo);
//    printf("Telefone: %s\n", funcionarios[indice_maior_salario].telefone);
//    printf("Email: %s\n", funcionarios[indice_maior_salario].email);
//    printf("Salario: %.2f\n", funcionarios[indice_maior_salario].salario);
//
//    if (telefone_em_branco) {
//        printf("\nAtencao: Algum funcionario esta com o numero de telefone em branco.\n");
//    } else {
//        printf("\nNenhum funcionario esta com o numero de telefone em branco.\n");
//    }
//}


//Exercicio 7 - Crie uma agenda telefônica como no exemplo 6, um sistema de menus deverá cadastrar cada usuário. (1. Novo 2. Remover, 3. Buscar, 4. Editar, 5. Sair)
//#include <stdio.h>
//#include <string.h>
//
//struct FUNCIONARIO {
//    char nome[50];
//    char cargo[50];
//    char telefone[15];
//    char email[50];
//    float salario;
//};
//
//void cadastrar(struct FUNCIONARIO agenda[], int *quantidade);
//void remover(struct FUNCIONARIO agenda[], int *quantidade);
//void buscar(struct FUNCIONARIO agenda[], int quantidade);
//void editar(struct FUNCIONARIO agenda[], int quantidade);
//
//int main() {
//    struct FUNCIONARIO agenda[100];
//    int opcao, quantidade = 0;
//
//    do {
//        printf("\n=== Agenda Telefonica ===\n");
//        printf("1. Novo\n");
//        printf("2. Remover\n");
//        printf("3. Buscar\n");
//        printf("4. Editar\n");
//        printf("5. Sair\n");
//        printf("Escolha uma opcao: ");
//        scanf("%d", &opcao);
//
//        switch (opcao) {
//            case 1:
//                cadastrar(agenda, &quantidade);
//                break;
//            case 2:
//                remover(agenda, &quantidade);
//                break;
//            case 3:
//                buscar(agenda, quantidade);
//                break;
//            case 4:
//                editar(agenda, quantidade);
//                break;
//            case 5:
//                printf("Saindo...\n");
//                break;
//            default:
//                printf("Opcao invalida! Tente novamente.\n");
//        }
//    } while (opcao != 5);
//
//    return 0;
//}
//
void cadastrar(struct FUNCIONARIO agenda[], int *quantidade) {
    printf("\n=== Novo Cadastro ===\n");
    printf("Nome: ");
    scanf(" %[^\n]", agenda[*quantidade].nome);
    printf("Cargo: ");
    scanf(" %[^\n]", agenda[*quantidade].cargo);
    printf("Telefone: ");
    scanf(" %[^\n]", agenda[*quantidade].telefone);
    printf("Email: ");
    scanf(" %[^\n]", agenda[*quantidade].email);
    printf("Salario: ");
    scanf("%f", &agenda[*quantidade].salario);
    (*quantidade)++;
    printf("Cadastro realizado com sucesso!\n");
}

void remover(struct FUNCIONARIO agenda[], int *quantidade) {
    char nome[50];
    int encontrado = 0;

    printf("\n=== Remover Cadastro ===\n");
    printf("Nome do funcionario a ser removido: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < *quantidade; i++) {
        if (strcmp(nome, agenda[i].nome) == 0) {
            for (int j = i; j < *quantidade - 1; j++) {
                agenda[j] = agenda[j + 1];
            }
            (*quantidade)--;
            encontrado = 1;
            printf("Cadastro removido com sucesso!\n");
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionario nao encontrado na agenda.\n");
    }
}

void buscar(struct FUNCIONARIO agenda[], int quantidade) {
    char nome[50];
    int encontrado = 0;

    printf("\n=== Buscar Cadastro ===\n");
    printf("Nome do funcionario a ser buscado: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < quantidade; i++) {
        if (strcmp(nome, agenda[i].nome) == 0) {
            printf("Funcionario encontrado:\n");
            printf("Nome: %s\n", agenda[i].nome);
            printf("Cargo: %s\n", agenda[i].cargo);
            printf("Telefone: %s\n", agenda[i].telefone);
            printf("Email: %s\n", agenda[i].email);
            printf("Salario: %.2f\n", agenda[i].salario);
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionario nao encontrado na agenda.\n");
    }
}

void editar(struct FUNCIONARIO agenda[], int quantidade) {
    char nome[50];
    int encontrado = 0;

    printf("\n=== Editar Cadastro ===\n");
    printf("Nome do funcionario a ser editado: ");
    scanf(" %[^\n]", nome);

    for (int i = 0; i < quantidade; i++) {
        if (strcmp(nome, agenda[i].nome) == 0) {
            printf("Novo nome: ");
            scanf(" %[^\n]", agenda[i].nome);
            printf("Novo cargo: ");
            scanf(" %[^\n]", agenda[i].cargo);
            printf("Novo telefone: ");
            scanf(" %[^\n]", agenda[i].telefone);
            printf("Novo email: ");
            scanf(" %[^\n]", agenda[i].email);
            printf("Novo salario: ");
            scanf("%f", &agenda[i].salario);
            printf("Cadastro editado com sucesso!\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Funcionario nao encontrado na agenda.\n");
    }
//}

//Exercicio 8 - Desafio. Usando o programa do item 6 tente salvar os dados em arquivo
//Imprima o vetor de struct em um arquivo txt
//Pesquise sobre fopen(), fwrite(), fread()

//#include <stdio.h>
//#include <string.h>

// Definição da struct FUNCIONARIO
struct FUNCIONARIO {
    char nome[50];
    char cargo[50];
    char telefone[15];
    char email[50];
    float salario;
};

void salvarDados(struct FUNCIONARIO agenda[], int quantidade);
void carregarDados(struct FUNCIONARIO agenda[], int *quantidade);

int main() {
    struct FUNCIONARIO agenda[100]; // Capacidade máxima de 100 funcionários
    int opcao, quantidade = 0;

    do {
        // Mostrar o menu de opções
        printf("\n=== Agenda Telefonica ===\n");
        printf("1. Novo\n");
        printf("2. Remover\n");
        printf("3. Buscar\n");
        printf("4. Editar\n");
        printf("5. Salvar em arquivo\n");
        printf("6. Carregar de arquivo\n");
        printf("7. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        // Executar a opção escolhida pelo usuário
        switch (opcao) {
            case 1:
                cadastrar(agenda, &quantidade);
                break;
            case 2:
                remover(agenda, &quantidade);
                break;
            case 3:
                buscar(agenda, quantidade);
                break;
            case 4:
                editar(agenda, quantidade);
                break;
            case 5:
                salvarDados(agenda, quantidade);
                break;
            case 6:
                carregarDados(agenda, &quantidade);
                break;
            case 7:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}

void salvarDados(struct FUNCIONARIO agenda[], int quantidade) {
    FILE *arquivo;
    arquivo = fopen("agenda.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fwrite(&quantidade, sizeof(int), 1, arquivo);
    fwrite(agenda, sizeof(struct FUNCIONARIO), quantidade, arquivo);

    fclose(arquivo);
    printf("Dados salvos com sucesso!\n");
}

void carregarDados(struct FUNCIONARIO agenda[], int *quantidade) {
    FILE *arquivo;
    arquivo = fopen("agenda.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    fread(quantidade, sizeof(int), 1, arquivo);
    fread(agenda, sizeof(struct FUNCIONARIO), *quantidade, arquivo);

    fclose(arquivo);
    printf("Dados carregados com sucesso!\n");
}


