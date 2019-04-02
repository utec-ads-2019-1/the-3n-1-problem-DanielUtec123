#include <iostream>

using namespace std;

int ciclo(int n){
    int ciclo=0;
    while (n>1){
        if(n%2==1)
        {
            n = 3*n+1;
            ciclo++;
        }
        if(n%2==0)
        {
            n = n/2;
            ciclo++;
        }

    }
    if(n==1){
        ciclo++;
    }
    return ciclo;
}

int main() {

    int i,j,max;

    while (cin>>i>>j){
        max=0;
        if(i>=j){
            for (int s=j;s<=i;s++){
                if(max<ciclo(s)){
                    max =ciclo(s);
                }
            }


        }
        if(i<j){
            for (int s=i;s<=j;s++){
                if(max<ciclo(s)){
                    max =ciclo(s);
                }
            }
        }
        cout << i << " " << j << " " << max<<endl;

    }


    return 0;
}
