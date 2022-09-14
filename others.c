#include <stdio.h>

int main(void) {
    int t,n,x,s,r;
    scanf("%d", &t);
    while(t--){
        int imbd=0;
        scanf("%d%d",&n,&x);
        for (int i=0; i<n; i++){
            scanf("%d%d",&s,&r);
            if (x>=s && r>imbd){
                imbd=r;
            }
        }
        printf("%d\n",imbd);
    }
	return 0;
}

