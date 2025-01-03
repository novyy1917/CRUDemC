#include <stdio.h>

int num = 0;

char nome[10][20];
char olhoDir[10][20];
char outrOlho[10][20];
int bracos[10];

int opcoes() {

    printf("Digite 1 para Criar uma nova alma.\n");
    printf("Digite 2 para Ler uma alma existente.\n");
    printf("Digite 3 para editar uma alma existente.\n");
    printf("Digite 4 para deletar uma alma existente.\n");
    printf("Digite 5 para sair.\n");
}

void roteador() {

    int fim = 0;

    do {

        opcoes();

        int escolha;
        scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            printf("Digite o nome da Nova Alma:\n");
            scanf("%s", &nome[num]);

            printf("Digite a quantidade de braços!\n");
            scanf("%d", &bracos[num]);
            
            printf("Digite A Cor Do Olho Direito!\n");
            scanf("%s", &olhoDir[num]);
            
            printf("DIGITE A COR DO OUTRO OLHO!\n");
            scanf("%s", &outrOlho[num]);

            printf("Obrigada.\n");

            printf("O nome da sua alma é %s\n", nome[num]);
            printf("Ela possui %d braços\n", bracos[num]);
            printf("Minha cabeça dói\n");
            printf("A cor do Outro Olho é %s\n", outrOlho[num]);

            break;
        case 2: 

            printf("Digite o número da alma.\n");
            printf("(Digite 999 para ver todas as almas.)\n");

            int i = 0;

            scanf("%d", &i);

            if (i == 999) {
                for (int o = 0; o <= num; o++) {
                    printf("Seu ID é %d\n", o);
                    printf("O nome da sua alma é %s.\n", nome[o]);
                    printf("Ela possui %d braços.\n", bracos[o]);
                    printf("A cor de seu olho direito é %s.\n", olhoDir[o]);
                    printf("A cor do Outro Olho é %s.\n", outrOlho[o]);
                }
            } else if (i > num) {
                printf("Não há nenhuma alma aqui.\n");
            } else {
                printf("O nome da sua alma é %s.\n", nome[i]);
                printf("Ela possui %d braços.\n", bracos[i]);
                printf("A cor de seu olho direito é %s.\n", olhoDir[i]);
                printf("A cor do Outro Olho é %s.\n", outrOlho[i]);
            }
            break;
        case 3:

            printf("Digite o ID da alma:\n");
            int o;
            scanf("%d", &o);
            
            printf("Digite 1 para editar o nome.\n");
            printf("Digite 2 para editar o olho direito.\n");
            printf("Digite 3 para editar o Outro Olho.\n");
            printf("Digite 4 para editar a quantidade de braços.\n");

            int p;
            scanf("%d", &p);

            switch (p) {
                case 1:
                    printf("Digite um novo nome.\n");
                    scanf("%s", &nome[o]);
                    break;
                case 2:
                    printf("Digite um novo olho direito.\n");
                    scanf("%s", &olhoDir[o]);
                    break;
                case 3:
                    printf("Digite um novo Outro Olho.\n");
                    scanf("%s", &outrOlho[o]);
                    break;
                case 4:
                    printf("Digite uma nova quantidade de bracos.\n");
                    scanf("%s", &bracos[o]);
                    break;
                default:
                    printf("Opcao invalida.\n");
            }
            printf("Editado com sucesso.\n");

            break;
        case 4:
            printf("Digite o ID da alma:\n");
            int o;
            scanf("%d", &o);
            
            nome[o] = "";
            olhoDir[o] = "";
            outrOlho[o] = "";
            bracos[o] = "";
            
            printf("Apagado com sucesso.");
            int o = 0;

            break;
        case 5:
        printf("Obrigada por me usar.\n");
            fim = 1;
            break;
        default:
            printf("Opcao invalida.\n");
        }
    } while (fim == 0);
}

int main() {
    printf("Bem vindo a seu Guarda Almas.\n");
    
    roteador();

    return 0;
}
