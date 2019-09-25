#include <iostream>

using namespace std;

void cambio(int &x,int &y){
    int m=x;
    x=y;
    y=m;
}


void imprimir(int a[],int tam){
    int t=0;
    while(t<tam){
        cout<<a[t++]<<endl;
    }
}
int SumaIte(int a[],int tam){
    int suma=0;
    int t =0;
    while(t<tam){
        suma+=a[t++];
    }
    return suma;
}

int SumaRec(int a[],int tam){
    if(tam==1)
        return a[0];
    else
        return a[tam-1] + SumaRec(a,tam-1);
}

void invertir(int a[],int tam){
    int t=0;
    int m=tam-1;
    while(t<tam/2){
        cambio(a[t],a[m]);
        t++;
        m--;
    }

}





int main()
{   int a=5;
    cout << "Hello world!" << endl;
    int m[]={10,20,30,40,50};
    imprimir(m,a);
    int t=SumaIte(m,a);
    cout << t << endl;
    int n=SumaRec(m,a);
    cout << n << endl;
    invertir(m,a);
    imprimir(m,a);
    return 0;


}
