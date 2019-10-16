#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
 
int main()
{
    int a[12][4];
    int poltrona1[48];
    int poltrona2[48];
    int gratuidade1 = 0;
    int gratuidade2 = 0;
    int l = 0;
    int c = 0;
    int menu = 0;
    int qtd = 0;
    int t = 0;
    int grts1 = 0;
    int op = 0;
    int bus = 0;
    int bus1 = 0;
    int bus1l = 0;
    int tot1= 0;
    int inte1 = 0 ;
    int meia1 = 0 ;
    int pas = 0 ;
    int bus2 = 0;
    int bus2l = 0;
    int tot2 = 0;
    int grts2 = 0;
    int inte2 = 0;
    int meia2 = 0;
    int assent1 = 0;
    int assent2 = 0;
 
    for (l=0;l<12;l++){
        for (c=0;c<4;c++){
            qtd++;
            a[l][c] = qtd;
        }
    }
    struct tm *DataAtual; 
    time_t Segundos;
    time(&Segundos);
    DataAtual = localtime(&Segundos); 
    while (menu!=6){
        printf("\n        GUANAMBI TRANSPORTES");
        printf("\n      TELEFONE: 077 9 3333 3333");
        printf("\nSatisfacao do Cliente e a nossa motivacao!");
        printf("\n");
        printf("\n- - MENU - -");
        printf("\n1-Instrucoes");
        printf("\n2-Vendas de Passagem");
        printf("\n3-Lista de Onibus");
        printf("\n4-Checagem de Vagas");
        printf("\n5-Historico de Vendas");
        printf("\n6-Sair");
        printf("\n");
        printf("\nopcao: ");
        scanf("%d", &menu);
        system("cls");
 
        switch (menu){
            case 1:
                printf("\nINSTRUCOES:");
                printf("\n");                
                printf("\n1 - Idosos tem direito a passagens inteiramente gratuitas - limite de 2 passagens gratuitas -");
                printf("\n2 - Estudantes SOMENTE COM COMPROVANTE pagam apenas MEIA passagem");
                printf("\n3 - ");
                printf("\n");
                printf("\nQUALQUER DUVIDA OU PROBLEMA ENTRAR EM CONTATO COM O SUPORTE DO PROGRAMA");
                printf("\n");
                printf("\n");
            break;
            case 2:
                printf("\nVENDA DE PASSAGEM");
                printf("\n");
                printf("\nVALORES:");
                printf("\nCD |  ONIBUS   |    SAIDA    |         DESTINO          | VALOR");           
                printf("\n01 | Onibus 1  | Guanambi BA | Sao Paulo SP             | R$130,00");                
                printf("\n02 | Onibus 2  | Guanambi BA | Belo Horizonte MG        | R$110,00");
                printf("\n");
                printf("\n");
                printf("\nDigite o Codigo do Onibus: ");
                scanf("%d", &bus);
 
                switch(bus){
                    case 1:
                        bus1++;
                        printf("\nOnibus 1 - Guanambi BA para Sao Paulo SP");
                        printf("\nValor: R$130,00");                  
                        printf("\nAssento: ");
                        scanf("%d", &assent1);
                        if (bus1>48) {
                        	printf("\nNao ha mais vagas para este onibus.");
                        	break;
						}
                        while (assent1>48) {
                            printf("\nEste Onibus possui apenas 48 assentos, por favor, digite um assento valido\n");
                            printf("\nAssento: ");
                            scanf("%d", &assent1);
                            system ("pause");
                        }
 
                        while (poltrona1[assent1] == 1) {
                            printf("\nEste assento ja esta ocupado\n");
                            printf("\nAssento: ");
                            scanf("%d", &assent1);
                            system ("pause");
                        }
 
                        poltrona1[assent1] = 1;
 
                        printf("\n");
                        printf("\n1 - Passagem Inteira");
                        printf("\n2 - Passagem MEIA ");
                        if(gratuidade1 < 2){
                            printf("\n3 - Passagem GRATUITA");
                        }
                        else {
                        	printf("\n3 - Passagem GRATUITA [LIMITE EXCEDIDO]");
						}
                        printf("\n");
                        printf("\nDigite o Tipo de Passagem: ");
                        scanf("%d", &pas);
                        if(gratuidade1 >= 2){
                        	printf("\nLimite de gratuidades excedido.");
                        	break;
						}
                        switch(pas)
                        {
                            case 1:
                                inte1++;
                                printf("\n___________________________________________________________");
                                printf("\n|           Onibus 1 - VIACAO GUANAMBI TURISMO            |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Sao Paulo - SP |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                        |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: R$130,00                                          |");
                                printf("\n|Tipo de Passagem: INTEIRA                                |");
                                printf("\n|Assento: %d                                               |", assent1);
                                printf("\n-----------------------------------------------------------");
                                printf("\n");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                break;
                            case 2:
                                meia1++;
                                printf("\n___________________________________________________________");
                                printf("\n|           Onibus 1 - VIACAO GUANAMBI TURISMO            |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Sao Paulo - SP |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                        |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: R$65,00                                           |");
                                printf("\n|Tipo de Passagem: MEIA - ESTUDANTE                       |");
                                printf("\n|Assento: %d                                               |", assent1);
                                printf("\n-----------------------------------------------------------");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                break;
                            case 3:
                                grts1++; 
                                printf("\n___________________________________________________________");
                                printf("\n|           Onibus 1 - VIACAO GUANAMBI TURISMO            |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Sao Paulo - SP |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                        |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: GRATIS                                            |");
                                printf("\n|Tipo de Passagem: GRATUIDADE IDOSO                       |");
                                printf("\n|Assento: %d                                               |", assent1);
                                printf("\n-----------------------------------------------------------");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                gratuidade1 ++;
                                break;
                        }
                        break;
                    case 2:
                        bus2++;
                        printf("\nOnibus 2 - Guanambi BA para Belo Horizonte MG");
                        printf("\nValor: R$110,00");                  
                        printf("\nAssento: ");
                        scanf("%d", &assent2);
                        if (bus2>48) {
                        	printf("\nNao ha mais vagas para este onibus.");
                        	break;
                        }
                        while (assent2>48) {
                            printf("\nEste Onibus possui apenas 48 assentos, por favor, digite um assento valido\n");
                            printf("\nAssento: ");
                            scanf("%d", &assent2);
                            system ("pause");
                        }
 
                        while (poltrona2[assent2] == 1) {
                            printf("\nEste assento ja esta ocupado\n");
                            printf("\nAssento: ");
                            scanf("%d", &assent2);
                            system ("pause");
                        }
 
                        poltrona2[assent2] = 1;
 
                        printf("\n");
                        printf("\n1 - Passagem Inteira");
                        printf("\n2 - Passagem MEIA ");
                        if(gratuidade2 < 2){
                            printf("\n3 - Passagem GRATUITA");
                        }
                        else {
                        	printf("\n3 - Passagem GRATUITA [LIMITE EXCEDIDO]");
						}
                        printf("\n");
                        printf("\nDigite o Tipo de Passagem: ");
                        scanf("%d", &pas);
                        if(gratuidade2 >= 2){
                        	printf("\nLimite de gratuidades excedido.");
                        	break;
						}
                        switch(pas)
                        {
                            case 1:
                                inte2++;
                                printf("\n______________________________________________________________");
                                printf("\n|           Onibus 2 - VIACAO GUANAMBI TURISMO               |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Belo Horizonte MG |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                           |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: R$110,00                                             |");
                                printf("\n|Tipo de Passagem: INTEIRA                                   |");
                                printf("\n|Assento: %d                                                  |", assent2);
                                printf("\n--------------------------------------------------------------");
                                printf("\n");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                break;
                            case 2:
                                meia2++;
                                printf("\n______________________________________________________________");
                                printf("\n|           Onibus 2 - VIACAO GUANAMBI TURISMO               |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Belo Horizonte MG |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                           |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: R$55,00                                              |");
                                printf("\n|Tipo de Passagem: MEIA                                      |");
                                printf("\n|Assento: %d                                                  |", assent2);
                                printf("\n--------------------------------------------------------------");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                break;
                            case 3:
                                grts2++; 
                                printf("\n______________________________________________________________");
                                printf("\n|           Onibus 2 - VIACAO GUANAMBI TURISMO               |");
                                printf("\n|Embarque: Guanambi - Bahia | Desembarque: Belo Horizonte MG |");
                                printf("\n|Data: %02d/%02d/%04d | Hora: %02d:%02d:%02d                           |", DataAtual->tm_mday, DataAtual->tm_mon+1, DataAtual->tm_year+1900, DataAtual->tm_hour, DataAtual->tm_min, DataAtual->tm_sec);                                
                                printf("\n|Valor: GRATIS                                               |");
                                printf("\n|Tipo de Passagem: GRATUIDADE IDOSO                          |");
                                printf("\n|Assento: %d                                                  |", assent2);
                                printf("\n--------------------------------------------------------------");
                                printf("\nDigite 1 para imprimir passagem e voltar ao menu principal: ");
                                scanf("%d", &op);
                                gratuidade2 ++;
                                break;
                        }
                             
                } 
                printf("\n");
            break;
            case 3:
                 printf("\nLISTA DE ONIBUS");
                 printf("\n");
                 printf("\n01 - Onibus 1 - INTERESTADUAL - Sao Paulo SP");                 
                 printf("\n02 - Onibus 2 - INTERESTADUAL - Belo Horizonte MG");
                 printf("\n");
                 printf("\nQUALQUER PROBLEMA ENTRAR EM CONTATO COM O DESENVOLVEDOR DO PROGRAMA");
                 printf("\n");
                 printf("\n");
            break;
            case 4:
                 printf("\nCHECAGEM DE VAGAS");
                 printf("\n");
                 printf("\nVALORES:");
                 printf("\nCD |  ONIBUS   |    SAIDA    | DESTINO");
                 printf("\n01 | Onibus 1  | Guanambi BA | Sao Paulo SP");                 
                 printf("\n02 | Onibus 2  | Guanambi BA | Belo Horizonte MG");
                 printf("\n");
                 printf("\n");
                 printf("\nDigite o Codigo do Onibus: ");
                 scanf("%d", &bus);
                 switch(bus)
                 {
                    case 01:
                        bus1l = bus1 - 48;
                        printf("\nAssentos vendidos e assentos disponiveis no Onibus 1:");
                        printf("\n");
                        printf("\nAssentos vendidos: %d", bus1);
                        printf("\nAssentos Livres: %d", bus1l);
                        printf("\n");
                    break;
                    case 02:
                        bus2l = bus2 - 48;
                        printf("\nAssentos vendidos e assentos disponiveis no Onibus 2:");
                        printf("\n");
                        printf("\nAssentos vendidos: %d", bus2);
                        printf("\nAssentos Livres: %d", bus2l);
                        printf("\n");
                    break;
                 }
            break;
            case 5:
                tot1 = meia1 * 65 + inte1 * 130;
                tot2 = meia2 * 55 + inte2 * 110;
                printf("\nHISTORICO DE VENDAS");
                printf("\n");                 
                printf("\nONIBUS 01");
                printf("\nPassagens Vendidas: %d", bus1);
                printf("\nTotal Inteiras: %d", inte1);
                printf("\nTotal Meias: %d", meia1);
                printf("\nTotal Gratuitas: %d", grts1);
                printf("\nTotal Arrecadado: %d", tot1);
                printf("\n");
                printf("\n");
                printf("\nONIBUS 02");
                printf("\nPassagens Vendidas: %d", bus2);
                printf("\nTotal Inteiras: %d", inte2);
                printf("\nTotal Meias: %d", meia2);
                printf("\nTotal Gratuitas: %d", grts2);
                printf("\nTotal Arrecadado: %d", tot2);
                printf("\n");
                printf("\n");
            break;
            default :
                printf("\nPor favor, digite uma OPCAO Valida\n");
            break;
        }
    }
}
