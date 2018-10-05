#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

using namespace std;

void tablero (int tam,char** p_matriz)
{

    bool control = false;

    for(int x=0; x<tam; x++)
    {
        if(x==0)
        {

            cout<<"     ";

        }
        if(x<9)
        {
            cout<<" "<<x<<" ";
        }
        else
        {
            cout<<" "<<x;
        }

    }
    cout<<endl;
    for(int j = 0; j < tam; j++)
    {

        if(control == false)
        {
            for(int z = 0; z < 3; z++)
            {

                for(int i=0; i<tam; i++)
                {
                    if(control == false)
                    {
                        if(i==0)
                        {

                            cout<<"     ";
                        }
                        cout<<"+--";
                        if(i == (tam-1))
                        {

                            cout<<"+";


                        }
                    }
                    else
                    {
                        if(*(*(p_matriz+i)+j) == '#')
                        {

                            if(j==0&&i==0)
                            {

                                cout<<"3    ";
                            }
                            if(j==1&&i==0)
                            {

                                cout<<"5    ";
                            }
                            if(j==2&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==3&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==4&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==5&&i==0)
                            {

                                cout<<"3 4 3";
                            }
                            if(j==6&&i==0)
                            {

                                cout<<"5 2 5";
                            }
                            if(j==7&&i==0)
                            {

                                cout<<"15   ";
                            }
                            if(j==8&&i==0)
                            {

                                cout<<"6 8  ";
                            }
                            if(j==9&&i==0)
                            {

                                cout<<"4 2 4";
                            }
                            if(j==10&&i==0)
                            {

                                cout<<"2    ";
                            }
                            if(j==11&&i==0)
                            {

                                cout<<"2    ";
                            }
                            if(j==12&&i==0)
                            {

                                cout<<"4    ";
                            }
                            if(j==13&&i==0)
                            {

                                cout<<"5    ";
                            }
                            if(j==14&&i==0)
                            {

                                cout<<"9    ";
                            }



                            cout<<"|##";
                            if(i==tam-1)
                            {



                                cout<<"|";
                                cout<<" "<<j;
                            }
                        }
                        else
                        {
                            if(j==0&&i==0)
                            {

                                cout<<"3    ";
                            }
                            if(j==1&&i==0)
                            {

                                cout<<"5    ";
                            }
                            if(j==2&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==3&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==4&&i==0)
                            {

                                cout<<"6    ";
                            }
                            if(j==5&&i==0)
                            {

                                cout<<"3 4 3";
                            }
                            if(j==6&&i==0)
                            {

                                cout<<"5 2 5";
                            }
                            if(j==7&&i==0)
                            {

                                cout<<"15   ";
                            }
                            if(j==8&&i==0)
                            {

                                cout<<"6 8  ";
                            }
                            if(j==9&&i==0)
                            {

                                cout<<"4 2 4";
                            }
                            if(j==10&&i==0)
                            {

                                cout<<"2    ";
                            }
                            if(j==11&&i==0)
                            {

                                cout<<"2    ";
                            }
                            if(j==12&&i==0)
                            {

                                cout<<"4    ";
                            }
                            if(j==13&&i==0)
                            {

                                cout<<"5    ";
                            }
                            if(j==14&&i==0)
                            {

                                cout<<"9    ";
                            }


                            cout<<"|  ";
                            if(i==tam-1)
                            {
                                cout<<"|";
                                cout<<" "<<j;

                            }
                        }
                    }
                }
                if(control == false)
                {
                    control = true;
                }
                else
                {
                    control = false;
                }
                cout<<endl;
            }
        }
        else
        {
            if(control == true)
            {

                for(int i = 0; i < tam; i++)
                {
                    if(*(*(p_matriz+i)+j) == '#')
                    {

                        if(j==0&&i==0)
                        {

                            cout<<"3    ";
                        }
                        if(j==1&&i==0)
                        {

                            cout<<"5    ";
                        }
                        if(j==2&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==3&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==4&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==5&&i==0)
                        {

                            cout<<"3 4 3";
                        }
                        if(j==6&&i==0)
                        {

                            cout<<"5 2 5";
                        }
                        if(j==7&&i==0)
                        {

                            cout<<"15   ";
                        }
                        if(j==8&&i==0)
                        {

                            cout<<"6 8  ";
                        }
                        if(j==9&&i==0)
                        {

                            cout<<"4 2 4";
                        }
                        if(j==10&&i==0)
                        {

                            cout<<"2    ";
                        }
                        if(j==11&&i==0)
                        {

                            cout<<"2    ";
                        }
                        if(j==12&&i==0)
                        {

                            cout<<"4    ";
                        }
                        if(j==13&&i==0)
                        {

                            cout<<"5    ";
                        }
                        if(j==14&&i==0)
                        {

                            cout<<"9    ";
                        }


                        cout<<"|##";
                        if(i == tam-1)
                        {
                            cout<<"|";
                            cout<<" "<<j<<endl;

                        }

                    }
                    else
                    {

                        if(j==0&&i==0)
                        {

                            cout<<"3    ";
                        }
                        if(j==1&&i==0)
                        {

                            cout<<"5    ";
                        }
                        if(j==2&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==3&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==4&&i==0)
                        {

                            cout<<"6    ";
                        }
                        if(j==5&&i==0)
                        {

                            cout<<"3 4 3";
                        }
                        if(j==6&&i==0)
                        {

                            cout<<"5 2 5";
                        }
                        if(j==7&&i==0)
                        {

                            cout<<"15   ";
                        }
                        if(j==8&&i==0)
                        {

                            cout<<"6 8  ";
                        }
                        if(j==9&&i==0)
                        {

                            cout<<"4 2 4";
                        }
                        if(j==10&&i==0)
                        {

                            cout<<"2    ";
                        }
                        if(j==11&&i==0)
                        {

                            cout<<"2    ";
                        }
                        if(j==12&&i==0)
                        {

                            cout<<"4    ";
                        }
                        if(j==13&&i==0)
                        {

                            cout<<"5    ";
                        }
                        if(j==14&&i==0)
                        {

                            cout<<"9    ";
                        }


                        cout<<"|  ";
                        if(i == tam-1)
                        {

                            cout<<"|";
                            cout<<" "<<j<<endl;

                        }

                    }
                }
                if(tam % 2 == 0 && j == tam-1)
                {
                    for(int i = 0; i < tam; i++)
                    {
                        if(i==0)
                        {
                            cout<<"     ";
                        }
                        cout<<"+--";
                        if( i == tam-1)
                        {
                            cout<<"+";
                        }
                    }
                }
                control = false;
            }

        }
    }
}
void leer  (int tam,char coordenadas[],int  dobledigito,int  dobledigito2,bool contam,int movimiento[])
{

    do
    {
        cout<<"Digite una posicion a rellenar"<<endl;
        cin>> coordenadas;
        system("cls");
        contam = false;


        if(coordenadas[1] == '-')
        {
            if(coordenadas[3]=='\0')
            {
                if(atoi(&coordenadas[0]) < tam && atoi(&coordenadas[2]) < tam)
                {
                    movimiento[0] = (atoi(&coordenadas[0]));
                    movimiento[1] = (atoi(&coordenadas[2]));
                    contam = true;

                }
            }
            else
            {
                if(coordenadas[4] == '\0')
                {
                    dobledigito = (atoi(&coordenadas[2]));//+(atoi(&coordenadas[3]));

                    if(atoi(&coordenadas[0]) < tam && dobledigito < tam)
                    {

                        movimiento[0] = (atoi(&coordenadas[0]));
                        movimiento[1] = dobledigito;
                        contam = true;
                        cout<<contam;
                    }
                }
            }
        }
        if(coordenadas[2] == '-')
        {
            dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
            if(coordenadas[4] == '\0')
            {
                if(dobledigito < tam && atoi(&coordenadas[3])<tam)
                {
                    movimiento[0] = dobledigito;
                    movimiento[1] = (atoi(&coordenadas[3]));
                    contam = true;
                }

            }
            else
            {
                dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
                dobledigito2 = (atoi(&coordenadas[3]));//+(atoi(&coordenadas[4]));
                if(dobledigito < tam && dobledigito2 < tam)
                {
                    movimiento[0] = dobledigito;
                    movimiento[1]= dobledigito2;
                    contam = true;
                }

            }
        }



    }
    while(contam == false);

}
void escribir(int tam,char coordenadas[],int  dobledigito,int  dobledigito2,char** p_matriz,int movimiento[])
{

    if(coordenadas[1] == '-')
    {
        if(coordenadas[3] == '\0')
        {
            *(*(p_matriz+atoi(&coordenadas[0])) + atoi(&coordenadas[2])) = '#';
        }
        else
        {
            if(coordenadas[4] == '\0')
            {
                dobledigito = (atoi(&coordenadas[2]));//+(atoi(&coordenadas[3]));
                cout<<dobledigito<<endl;
                *(*(p_matriz+atoi(&coordenadas[0]))+dobledigito) = '#';
            }
        }
    }
    if(coordenadas[2] == '-')
    {
        dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
        if(coordenadas[4] == '\0')
        {
            *(*(p_matriz+dobledigito)+atoi(&coordenadas[3]))='#';

        }
        else
        {
            dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
            dobledigito2 = (atoi(&coordenadas[3]));//+(atoi(&coordenadas[4]));
            *(*(p_matriz+dobledigito)+dobledigito2) = '#';

        }
    }

}
void eliminar(int tam,char coordenadas[],int  dobledigito,int  dobledigito2,char** p_matriz)
{

    if(coordenadas[1] == '-')
    {
        if(coordenadas[3] == '\0')
        {
            *(*(p_matriz+atoi(&coordenadas[0])) + atoi(&coordenadas[2])) = ' ';
        }
        else
        {
            if(coordenadas[4] == '\0')
            {
                dobledigito = (atoi(&coordenadas[2]));//+(atoi(&coordenadas[3]));
                cout<< dobledigito <<endl;
                *(*(p_matriz+atoi(&coordenadas[0]))+dobledigito) = ' ';
            }
        }
    }
    if(coordenadas[2] == '-')
    {
        dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
        if(coordenadas[4] == '\0')
        {
            *(*(p_matriz+dobledigito) + atoi(&coordenadas[3])) = ' ';
        }
        else
        {
            dobledigito = (atoi(&coordenadas[0]));//+(atoi(&coordenadas[1]));
            dobledigito2 = (atoi(&coordenadas[3]));//+(atoi(&coordenadas[4]));
            *(*(p_matriz + dobledigito) + dobledigito2) =' ';

        }
    }

}
int bloque(int movimiento[],int movimiento2[],bool &alderecho,bool &selec)
{

    int resultado = -1;

    if((movimiento[0] == movimiento2[0]) || (movimiento[1] == movimiento2[1]))
    {
        if(movimiento[0] == movimiento2[0])
        {
            resultado=movimiento[1]-movimiento2[1];

            cout<<"caso1="<<resultado;
            if( resultado < 0)
            {
                cout<<"caso3="<<resultado;
                resultado = sqrt((movimiento[1]-movimiento2[1])*(movimiento[1]-movimiento2[1]));
                alderecho = false;
                selec = true;
            }

        }
        if(movimiento [1] == movimiento2[1])
        {
            resultado = movimiento[0] - movimiento2[0];
            if( resultado<0)
            {
                resultado = sqrt((movimiento[0]-movimiento2[0])*(movimiento[0]-movimiento2[0]));
                alderecho = false;
                selec = false;
            }
        }
        return resultado;

    }
    else
    {
        return -1;
    }
}

void escribir2(int moviento[],char** p_matriz)
{

    (*(*(p_matriz+moviento[0])+moviento[1]))='#';

}

void eliminar2(int moviento[],char** p_matriz)
{

    (*(*(p_matriz+moviento[0])+moviento[1]))=' ';

}

int main()
{
    int tam;
    string mantener = "si";
    char coordenadas[6];
    char coordenadas2[6];
    int  dobledigito = 0;
    int  dobledigito2 = 0;
    bool contam = false;
    string correctas;
    int errores = 0;
    string jugada;
    string cantidad;
    int diferencia = 0;
    int movimiento[2];
    int movimiento2[2];
    bool alderecho = true;
    bool selec = true;
    int op = 0;

    cout<<"Bienvenid@ al juego de Picross Javeriana!"<<endl;
    cout<<"Por favor digite el número correspondiente en pantalla."<<endl;
    cout<<"1.Jugar " <<endl<<"2.Cargar un juego "<<endl<<"3.Salir"<<endl;
    cin>>op;

    switch(op)
    {
    case 1:
    {
        cout <<"Digite el tamano de la matriz."<<endl;
        cin>>tam;
        char diagonal[15][15]= {{' ',' ',' ',' ',' ',' ',' ','#','#','#',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' '},
            {' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' '},{' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' '},
            {' ',' ',' ',' ',' ','#','#','#','#','#','#',' ',' ',' ',' '},{' ',' ','#','#','#',' ','#','#','#','#',' ','#','#','#',' '},
            {' ','#','#','#','#','#',' ','#','#',' ','#','#','#','#','#'},{'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
            {'#','#','#','#','#','#',' ','#','#','#','#','#','#','#','#'},{' ','#','#','#','#',' ',' ','#','#',' ','#','#','#','#',' '},
            {' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ',' ',' ','#','#',' ',' ',' ',' ',' ',' '},
            {' ',' ',' ',' ',' ',' ','#','#','#','#',' ',' ',' ',' ',' '},{' ',' ',' ',' ',' ','#','#','#','#','#',' ',' ',' ',' ',' '},
            {' ',' ',' ','#','#','#','#','#','#','#','#','#',' ',' ',' '}
        };
        for(int i =0; i<15; i++)
        {
            for(int j=0; j<15; j++)
            {
                cout<<diagonal[i][j];
            }
            cout<<endl;
        }

        char **p_matriz;
        p_matriz = new char *[tam];
        for(int i=0; i<tam; i++)
        {
            p_matriz[i]= new char [tam];

        }

        for(int i=0; i<tam; i++)                   //inicializando matriz
        {
            for(int j=0; j<tam; j++)
            {

                *(*(p_matriz+i)+j)=' ';


            }

        }

        for(int i=0; i<tam; i++)
        {
            cout<<endl;
            for(int j=0; j<tam; j++)
            {
                cout<<*(*(p_matriz+i)+j);

            }
        }
        cout<<endl;





        while(mantener=="si")
        {

            tablero(tam,p_matriz);  //imprime el tablero
            cout<<"Desea rellenar un solo pixel o un bloque?"<<endl;
            cout<<"Digite pixel o bloque."<<endl;
            cin>>cantidad;
            if( cantidad == "pixel")
            {
                leer(tam,coordenadas,dobledigito,dobledigito2,contam,movimiento); // leer y validar las coordenadas
                do
                {
                    cout<<"Desea escribir o eliminar un dato?"<<endl;
                    cout<<"Digite escribir o eliminar"<<endl;
                    cin>>jugada;
                    if(jugada=="escribir")
                    {
                        escribir(tam,coordenadas,dobledigito,dobledigito2,p_matriz,movimiento); // actualiza la coordenada en el tablero del jugador
                    }
                    if(jugada=="eliminar")
                    {
                        eliminar(tam,coordenadas,dobledigito,dobledigito2,p_matriz);
                    }
                }
                while(jugada!="escribir" && jugada!="eliminar");
            }
            if(cantidad=="bloque")
            {
                do
                {
                    leer(tam,coordenadas,dobledigito,dobledigito2,contam,movimiento);
                    cout<<"leer1"<<endl;
                    leer(tam,coordenadas2,dobledigito,dobledigito2,contam,movimiento2);
                    cout<<"leer2"<<endl;
                    cout<<"movimiento1"<<movimiento[0]<<"- movimiento2"<<movimiento2[0];
                    diferencia=bloque(movimiento,movimiento2,alderecho,selec);
                    cout<<"la diferencia es:"<<diferencia;
                }
                while(diferencia==-1);

                do
                {
                    cout<<"Desea escribir o eliminar un dato?"<<endl;
                    cin>>jugada;
                    if(jugada == "escribir")
                    {

                        for(int i = 0; i <= diferencia; i++)
                        {

                            escribir2(movimiento,p_matriz); // actualiza la coordenada en el tablero del jugador
                            if(alderecho == true)
                            {
                                if(selec == false)
                                {
                                    movimiento[1]--;
                                }
                                else
                                {
                                    movimiento[1]--;
                                }

                            }
                            if(alderecho == false)
                            {
                                if(selec == true)
                                {
                                    movimiento[0]++;
                                }
                                else
                                {
                                    movimiento[0]--;
                                }
                            }


                        }
                    }
                    if(jugada == "eliminar")
                    {

                        for(int i = 0; i <= diferencia; i++)
                        {

                            eliminar2(movimiento,p_matriz); // actualiza la coordenada en el tablero del jugador
                            if(alderecho == true)
                            {
                                if(selec == false)
                                {
                                    movimiento[1]--;
                                }
                                else
                                {
                                    movimiento[1]--;
                                }

                            }
                            if(alderecho == false)
                            {
                                if(selec == true)
                                {
                                    movimiento[0]++;
                                }
                                else
                                {
                                    movimiento[0]--;
                                }
                            }


                        }
                    }
                }




                while(jugada != "escribir" && jugada != "eliminar");

            }


            tablero(tam,p_matriz);

            cout<<"Desea comparar?"<<endl;
            cin >>correctas;
            if(correctas == "si")
            {
                for(int i = 0; i < tam; i++)
                {
                    for(int j = 0; j<tam; j++)
                    {
                        if(*(*(p_matriz+i)+j)!=diagonal[i][j])
                        {
                            errores++;
                        }

                    }
                }
                cout<<"Sus errores son :"<<errores<<endl;
                errores=0;
            }

            cout<<"¿Desea seguir jugando?"<<endl;
            cin>>mantener;
            system("cls");
        }

        for(int i=0; i<tam; i++)
        {

            delete[] p_matriz[i];
        }
        delete[] p_matriz;

    }

    break;

    case 2:
    {
        cout<<"De momento esta opcion se encuentra deshabilitada"<<endl;
    }
    break;

    case 3:
    {
        cout<<"Ha seleccionado salir de la aplicacion, vuelva pronto"<<endl;
    }
    break;
    default:
    {
        cout<<"ERROR"<<endl;
    }
    break;
    }



    return 0;


}
