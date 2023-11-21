#include <stdio.h>

int bui[10000] = {0};


int main() {
    int L, H, R;
    while(scanf("%d %d %d", &L, &H, &R) != EOF){
        for(int i = L - 1 ; i < R ; i++){
            if(bui[i] < H) bui[i] = H;
        }
    }

    for(int i = 0 ; i < 10000 ; i++){
        if(bui[i] != bui[i + 1])
            printf("%d %d", i, bui[i]);
    }



    return 0;
}
