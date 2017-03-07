#include<iostream>
#include<stdlib.h>
using namespace std;
struct nodo{
    int info;
    struct nodo *sgt;
};
main(){
    struct nodo *entra;
    struct nodo *nuevo;
    struct nodo *aux;
    entra=NULL;
    int dato; // solo ingresa datos enteros
    int cant, i=1, cont;
    cout<<"\t\tEl siguiente programa es un ejemplo de nodos\n\n";
    cout<<"Ingrese la cantidad de nodos=";cin>>cant;
    while(i<=cant){
                       nuevo=(struct nodo *)malloc(sizeof(struct nodo)); // asignacion de cantidad de memoria
                       nuevo->sgt=entra;
                       cout<<"\n";
                       cout<<"Ingrese dato:";
                       cin>>dato;
                       nuevo->info=dato;
                       entra=nuevo;
                       i++;
    }
    	cout<<"\n\nUsted ingreso\n";

    while(nuevo!=NULL){
    
        cout<<"\nDATO="<<nuevo->info;
        nuevo=nuevo->sgt;
    }
   
    system("pause>>null");//termina cuando no hay mas nodos por mostrar
}