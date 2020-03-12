#include <stdio.h>

void selectionsort(){
    int v[5] = {99,54,7,5,47};
    int max = 0;
    int min = 0;
    int aux = 0; 



    for (int i=0;i<4;i++){

        for (int j=1;j<4;j++){
            if (v[i] > v[j]){
                aux = j;
                min = v[j];
                max = v[i];
                printf("%d ", aux);

            }
        }
        v[i] = min;
        v[aux] = max;
        
    }

    
    for (int x=0;x<5;x++){
        printf("%d ", v[x]);

    }
}




int main(){
    selectionsort();
}