#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result = a*b*c;
    int count[10]={0};
    int d;

    while(result>0){
        d = result % 10;
        count[d]++;
        result /= 10;
    }

    for(int i=0;i<10;i++){
        printf("%d\n",result[i]);
    }


    return 0;
}
