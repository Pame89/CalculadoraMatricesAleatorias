#include <cstdio>
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int LlenadoMatriz1();
int LlenadoMatriz2();
int MatrizTranspuesta();
int Matriz1[5][4];
int Matriz2[5][4];
int MatrizTrans[4][5];
int MatrizResul[5][4];
int opcion;
char desea;
const int suma=1;
const int resta=2;
const int multiplicacion=3;





int main ()
 {

    do{

        cout<<"Bienvenido al programa calculadora de matrices, el cual suma, resta y multiplica matrices";
        cout<<endl;
        cout<<endl;
        cout<<"Cual operacion desea realizar: 1)Suma  2)Resta  3)Multiplicacion  4)Salir ";
        cin>>opcion;
        cout<<endl;
        cout<<endl;

        switch(opcion)
        {
            case 1:
                    //Suma de matrices
                    cout<<"Esta opcion suma matrices aleatorias";
                    cout<<endl;
                    cout<<LlenadoMatriz1();
                    cout<<endl;
                    cout<<LlenadoMatriz2();
                    cout<<endl;
                    cout<<endl;
                    cout<<"El resultado de la suma es:";
                    cout<<endl;
                    for(int i=0;i<5;i++){
                        for(int j=0;j<4;j++){
                            MatrizResul[i][j]=Matriz1[i][j]+Matriz2[i][j];
                            cout<<MatrizResul[i][j]<<" ";

                        }

                        cout<<endl;
                    }

                    break;

            case 2:
                    //Resta de matrices
                    cout<<"Esta opcion resta matrices aleatorias";
                    cout<<endl;
                    cout<<LlenadoMatriz1();
                    cout<<endl;
                    cout<<LlenadoMatriz2();
                    cout<<endl;
                    cout<<endl;
                    cout<<"El resultado de la resta es:";
                    cout<<endl;
                    for(int i=0;i<5;i++){
                        for(int j=0;j<4;j++){
                            MatrizResul[i][j]=Matriz1[i][j]-Matriz2[i][j];
                            cout<<MatrizResul[i][j]<<" ";

                        }

                        cout<<endl;
                    }

                    break;

            case 3:
                    //Multiplica matrices aleatorias
                    cout<<"Esta opcion multiplica matrices aleatorias";
                    cout<<endl;
                    cout<<LlenadoMatriz1();
                    cout<<endl;
                    cout<<MatrizTranspuesta();
                    cout<<endl;
                    cout<<endl;
                    cout<<"El resultado de la multiplicacion es: ";
                    cout<<endl;
                    for(int i=0;i<5;i++){
                        for(int j=0;j<4;j++){
                            MatrizResul[i][j]=Matriz1[i][j]*MatrizTrans[j][i];
                            cout<<MatrizResul[i][j]<<" ";
                        }

                        cout<<endl;

                    }

                    break;

            case 4:
                    //No realiza ninguna operacion

                    break;

        }

        cout<<"Desea realizar otra operacion(s/n)";
        cin>>desea;

    }while(desea=='s'|| desea=='S');

    system("PAUSE");
 }

int LlenadoMatriz1(){
    cout<<endl;
    cout<<"Los numeros de la matriz 1 son: ";
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            Matriz1[i][j]= 10 + rand()% 89;
            cout<<Matriz1[i][j]<< " ";
        }

        cout<<endl;
    }
    cout<<endl;
    return 0;
}


int LlenadoMatriz2(){
    cout<<endl;
    cout<<"Los numeros de la matriz 2 son: ";
    cout<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            Matriz2[i][j]= 10 + rand()% 89;
            cout<<Matriz1[i][j]<< " ";
        }

        cout<<endl;
    }
    cout<<endl;
    return 0;
}

int MatrizTranspuesta(){
    cout<<endl;
    cout<<"Los numeros de la matriz transpuesta son: ";
    cout<<endl;
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            MatrizTrans[i][j]= 10 + rand()% 89;
            cout<<MatrizTrans[i][j]<<" ";

        }

       cout<<endl;

    }
    cout<<endl;
    return 0;
}

