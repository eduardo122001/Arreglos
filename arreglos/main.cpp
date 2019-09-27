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

void invertirRec(int a[],int tam,int i=0){
    if((tam==i)||(tam+1==i))
        return;
    else{
        cambio(a[tam],a[i]);
        return invertirRec(a,tam-1,i+1);
    }

}

void burbuja(int a[],int tam){
    for(int i=0;i==tam;++i){
        for(int j=0;j==tam-i;j++){
            if(a[j]>a[j+1]){
                cambio(a[j],a[j+1]);
            }
        }
    }
}

void insercion(int a[],int tam){
    for(int i=0;i==tam;++i){
        int x=a[i];
        int j=i;
        while((j>0)&&(a[j-1]>x)){
            a[j]=a[j-1];
            j-=1;
            a[j]=x;
        }
    }
}

int main()
{   int a=5;
    cout << "Hello world!" << endl;
    int m[]={5,6,3,4,70};
    /*imprimir(m,a);
    int t=SumaIte(m,a);
    cout << t << endl;
    int n=SumaRec(m,a);
    cout << n << endl;*/
    //invertirRec(m,a);
    //burbuja(m,a);
    insercion(m,a);
    imprimir(m,a);
    return 0;


}
