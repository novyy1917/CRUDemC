#include <stdio.h>
#include <stdlib.h>

/*
int contaLet(char strang[]) {
    int i = 0;

    while (i < 20) {
        if (strang[i] == '\0') {
            return i;
            break;
        }
        i++;
    }
}*/

void umadez() {
    printf("De 1 a 10, o quanto ela/ele");
}

int numDeBixas = 1;

typedef struct Gay {

    int dar;
    int comer;
    int bear;
    int twink;

    int mostrar;

    char nome[20];

} Viadaa;

Viadaa *vagabas;

vagabas = malloc(sizeof(Viadaa));

    vagabas[0].nome = "vazio";
    vagabas[0].dar = 0;
    vagabas[0].comer = 0;
    vagabas[0].bear = 0;
    vagabas[0].twink = 0;
    vagabas[0].mostrar = 0;

int criarBixa() {

    char tempNome[20];
    int tempDar;
    int tempComer;
    int ebear;
    int etwink;

    printf("Qual o nome da sua bixa?\n");
    scanf("%s", &tempNome);

    umadez();
    printf(" gosta de dar:\n");
    scanf("%d", &tempDar);

    umadez();
    printf(" gosta de comer:\n");
    scanf("%d", &tempComer);

    umadez();
    printf(" é bear:\n");
    scanf("%d", &ebear);

    umadez();
    printf(" é twink:\n");
    scanf("%d", &etwink);

    numDeBixas++;
    realloc(vagabas, (sizeof(Viadaa) * numDeBixas));

    vagabas[numDeBixas - 1].nome = tempNome;
    vagabas[numDeBixas - 1].dar = tempDar;
    vagabas[numDeBixas - 1].comer = tempComer;
    vagabas[numDeBixas - 1].bear = ebear;
    vagabas[numDeBixas - 1].twink = etwink;
    vagabas[numDeBixas - 1].mostrar = 1;
}

lerBixa() {
    for (int i = 0; i < numDeBixas; i++) {
        if (vagabas[i].mostrar == 1) {
            printf("%s\n", vagabas[i].nome);
            printf("%d\n", vagabas[i].dar);
            printf("%d\n", vagabas[i].comer);
            printf("%d\n", vagabas[i].bear);
            printf("%d\n", vagabas[i].twink);
            printf("-- FIM --");
        } else {
            continue;
        }
    }
}

editarBixa() {
    int respon, edicaoInt;
    char edicaoChar[20];
    int vagaAEditar;

    printf("Qual bixa voce deseja editar?\n");
    scanf("%d", vagaAEditar);

    printf("O que voce deseja editar?\n");

    printf("1 - Nome\n");
    printf("2 - Dar\n");
    printf("3 - Comer\n");
    printf("4 - Bear\n");
    printf("5 - Twink\n");

    scanf("%d", &respon);

    switch (respon)
    {
    case 1:
        printf("Novo dado:\n");
        scanf("%s", &edicaoChar);
        vagabas[vagaAEditar].nome = edicaoChar;
        break;
    case 2:
        printf("Novo dado:\n");
        scanf("%d", &edicaoInt);
        vagabas[vagaAEditar].dar = edicaoInt;
        break;
    case 3:
        printf("Novo dado:\n");
        scanf("%d", &edicaoInt);
        vagabas[vagaAEditar].comer = edicaoInt;
        break;
    case 4:
        printf("Novo dado:\n");
        scanf("%d", &edicaoInt);
        vagabas[vagaAEditar].bear = edicaoInt;
        break;
    case 5:
        printf("Novo dado:\n");
        scanf("%d", &edicaoInt);
        vagabas[vagaAEditar].twink = edicaoInt;
        break;
    default:
        break;
    }
}

deletarBixa() {
    int bixaADeletar;

    printf("Que bixa voce gostaria de deletar?\n");
    scanf("%d", bixaADeletar);

    vagabas[bixaADeletar].mostrar = 0;
    printf("Bixa deletada com sucesso!\n");
}

void roteador() {

    int resposta;

    printf("O que voce deseja fazer?\n");

    printf("1 - Criar.\n");
    printf("2 - Ler.\n");
    printf("3 - Editar.\n");
    printf("4 - Deletar.\n");

    scanf("%d", &resposta);

    switch (resposta)
    {
    case 1:
        criarBixa();
        break;
    case 2:
        lerBixa();
        break;
    case 3:
        editarBixa();
        break;
    case 4:
        deletarBixa();
        break;
    default:
        printf("Opcao invalida.\n");
        break;
    }
}

int main() {

    int fim = 1;
    printf("Bem vindo ao GuardaBixas 2000!\n");

    while (fim != 0) {
        char c;
        roteador();
        printf("Deseja continuar? (s/n)");
        scanf("%c", c);
        if (c == 'n') {
            fim = 0;
            break;
        }
    }
    free(vagabas);
}
