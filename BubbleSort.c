#include <stdio.h>



void bubblesort(){
    int v[8] = {5,67,7,2,6,8,3,23};

    for (int i=(sizeof(v)/4)-1;i>1;i--){
        for (int j=0;j<i;j++){
            if (v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;


            }
        }
    }

    for (int x=0;x<8;x++){
        printf(" %d ", v[x]);
    }

}





int main(){

    bubblesort();
}