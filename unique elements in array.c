
#include <stdio.h>

int main()
{
    int n;
    printf("ENTER HOW MUCH VALUE YOU WANT TO ENTER:\n");
    scanf("%d",&n);
    int value[n];
    printf("START ENTERING VALUE:\n");
    for(int i=0 ; i<n ; i++)
        scanf("%d",&value[i]);
        
    int count,fr[n],i,j;
    
    for( i=0 ; i<n ; i++){
        count=1;
        if(value[i]!=-1){
            for( j=i+1 ; j<n ; j++ ){
                if(value[i]==value[j]){
                    count++;
                    value[j]=-1;
                }
                
            }
        }
        fr[i]=count;
        
    }
    printf("NO OF UNIQUE ELEMENTS ARE : ");
    for(i=0;i<n;i++){
        if(fr[i]==1 && value[i]!=-1){
            printf("%d ",value[i]);
        }
    }
    

    return 0;
}

