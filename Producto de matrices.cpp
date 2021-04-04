#include <iostream>
#include <conio.h>

int main(){
    int fa, ca, fb, cb, producto=0, resultado=0;

    std::cout<<"Introduzca el numero de filas de la matriz A: ";
    std::cin>>fa;
    std::cout<<"Introduzca el numero de columnas de la matriz A: ";
    std::cin>>ca;
    std::cout<<"Introduzca el numero de filas de la matriz B: ";
    std::cin>>fb;
    std::cout<<"Introduzca el numero de columnas de la matriz B: ";
    std::cin>>cb;
    std::cout<<std::endl;

    int a[fa][ca], b[fb][cb];


    if (ca==fb){
        std::cout<<"El producto se puede realizar"<<std::endl;


    // ahora se pide al usuario que escriba cada uno de los elementos de cada matriz A

        for (int i=0; i<fa; i++){
            for (int j=0; j<ca; j++){
                std::cout<<"Introduzca el elemento de la matriz A en la posicion "<<i+1<<" "<<j+1
                <<": ";
                std::cin>>a[i][j];
            }
        }
        std::cout<<std::endl;

        // ahora se pide al usuario que escriba cada uno de los elementos de cada matriz B

        for (int i=0; i<fb; i++){
            for (int j=0; j<cb; j++){
                std::cout<<"Introduzca el elemento de la matriz B en la posicion "<<i+1<<" "<<j+1<<": ";
                std::cin>>b[i][j];
            }
        }


        //se inicializa la matriz resultante del producto de A y B

        int c[fa][cb];

        //se efectua el producto, el bucle for interior recorre las columnas de A, el bucle for de en medio recorre las
        //      columnas de B, y el bucle for exterior recorre las filas de A (como sabemos ca = fb)
        for (int k=0; k<fa; k++){
            for (int j=0; j<cb; j++){
                for (int i=0; i<ca; i++){
                    producto = a[k][i] * b[i][j];
                    resultado = resultado + producto;
                }
            c[k][j] = resultado;
            resultado =0;
            }
        }

    std::cout<<"\nLa matriz que resulta de multiplicar";
    for (int i=0; i<fa; i++){
        std::cout<<std::endl<<"[";
        for (int j=0; j<ca; j++){
            std::cout<<a[i][j];
            if (j<ca-1){
                std::cout<<" ";
            }
        }
        std::cout<<"]";
    }

    std::cout<<"\ny ";

    for (int i=0; i<fb; i++){
        std::cout<<std::endl<<"[";
        for (int j=0; j<cb; j++){
            std::cout<<b[i][j];
            if (j<cb-1){
                std::cout<<" ";
            }
        }
        std::cout<<"]";
    }

    std::cout<<"\nes ";


        //se imprime la matriz C, resultado del producto

    for (int i=0; i<fa; i++){
        std::cout<<std::endl<<"[";
        for (int j=0; j<cb; j++){
            std::cout<<c[i][j];
            if (j<cb-1){
                std::cout<<" ";
            }
        }
        std::cout<<"]";
    }


    }
    else{
        std::cout<<"El producto es imposible de realizar ya que el numero de columnas de A no es igual al numero de filas de B";
    }



    getch();

    return 0;
}
