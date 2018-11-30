#include <stdio.h>

int n,ans,tmp,arr[105];

int main (void){
    scanf("%i", &n);

    int i = 0;

    for (i = 0; i < n; i++){
        scanf("%i",&tmp);

        switch (tmp){
        case 0:
            ans++;
            break;
        case 1:
            if(arr[i-1]!=1){
                arr[i]=1;
            } else ans++;
            break;
        case 2:
            if(arr[i-1]!=2){
                arr[i]=2;
            }
            else ans++;
            break;
        case 3:
           if(arr[i-1]==1){
                arr[i]=2;
           }
           if(arr[i-1]==2){
                arr[i]=1;
           }
           break;
        }
    }

    printf("%i",ans);
}