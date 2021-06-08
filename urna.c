#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int  main()
{
    setlocale (LC_ALL,"portuguese");
    printf ("\n criador: Lucas Samuel Barbosa");
    printf ("\n Programa de elei��o");

    int eleicao = 0, vereador = 3,cv1 = 0, cv2 = 0, cv3 = 0, vcvn = 0, prefeito = 2, cp1 = 0, cp2 = 0, vcpn = 0, menu = 0, contagem, apuracao = 0;

    while(menu!=3)
    {
        for(contagem=0; contagem<1; contagem++)
        {
            printf ("\n\n informe uma op��o:\n se for votar, op��o 1\n se for fazer apura��o dos votos, op��o 2\n se for sair, op��o 3");
            printf ("\n escolha uma op��o: ");
            scanf ("%d", &menu);
            system("cls");
        }




        switch (menu)
        {
        case 1:
        {


            printf ("\n\n 111 - Jo�o do Frete\n 222 - Maria da Pamonha\n 333 - Ze da Farmacia\n 444 - voto nulo\n qualquer outro numero � invalido ent�o � anulado o voto");
            printf ("\n informe o numero do seu candidato a vaga de vereador: ");
            scanf ("%d", &vereador);


            switch(vereador)
            {



            case 111:
            {
                cv1=cv1+1;
                printf ("\n voce votou no cadidato a vereador Joao do Frete");
                break;
            }
            case 222:
            {
                cv2=cv2+1;
                printf ("\n voce votou no candidato a vereador Maria da Pamonha");
                break;
            }
            case 333:
            {
                cv3=cv3+1;
                printf ("\n voce votou no candidato a vereador Ze da Farmacia");
                break;
            }
            case 444:
            {
                vcvn=vcvn+1;
                printf  ("\n voto nulo");
                break;
            }
            default:
            {
                vcvn=vcvn+1;
                printf   ("\n numero invalido, seu voto � nulo");
                break;
            }


            break;
            }

            printf ("\n\n 11 - Dr. Zureta\n 22 - Senhor Gomes\n 44 - voto nulo\n qualquer outro numero � invalido ent�o � anulado o voto");
            printf ("\n informe o numero do seu candidato para a vaga de prefeito: ");
            scanf ("%d", &prefeito);
            fflush(stdin);
            switch(prefeito)
            {



            case 11:
            {
                {
                    cp1=cp1+1;
                    printf ("\n voc� votou no cadidato para a vaga de prefeito Dr. Zureta");
                    break;
                }

                case 22:
                {
                    cp2=cp2+1;
                    printf ("\n voc� votou no cadidato para prefeito Senhor Gomes");
                    break;
                }


                case  44:
                {
                    vcpn=vcpn+1;
                    printf  ("\n voto nulo");
                    break;
                }
                default:
                {
                    vcpn=vcpn+1;
                    printf ("\n numero invalido, seu voto � nulo");
                    break;
                }
                break;
                system("cls");
            }
            break;
            }
            break;
        }

        case 2:
        {


            printf("\n apura��o dos votos") ;
            printf("\n para vereador:");
            printf ("\n O cadidato a vereador Joao do Frete teve %d:", cv1);
            printf ("\n O cadidato a vereador Maria da Pamonha teve %d:", cv2);
            printf ("\n O candidato a vereador Z� da Farmacia teve %d:",cv3);
            printf ("\n Numero de voto nulo %d:", vcvn);
            printf ("\n Numero invalido, seu voto foi anulado %d:", vcvn);
            printf("\n______________________________________________________________");
            printf("\n apura��o dos votos") ;
            printf("\n para prefeito:");
            printf ("\n O cadidato a prefeito Dr. Zureta teve %d:",  cp1);
            printf ("\n O cadidato a senhor Gomes teve %d:",  cp2);
            printf ("\n Numero de voto nulo teve %d:", vcpn);
            printf ("\n Numero invalido, seu voto foi anulado %d:", vcpn);
            printf("\n______________________________________________________________");


            break;
        }



        case 3:
        {
            exit(0);
            break;
        }


        }
    }

    system("cls");
    return 0;
}



