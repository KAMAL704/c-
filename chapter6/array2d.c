// #include<stdio.h>
// int main(){
    
//     int k [3][3]  = {{1,2,3},
//                     {4,5,6},
//                     {7,8,9}
//                         };

    
    
//     printf("%d\n", k[2][3]);
//     return 0;
// }


#include <stdio.h>

int main() {
    int k[3][3] = {
                  {1, 2, 3},
                  {4, 5, 6},
                {7, 8, 9}
    };

    for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
            printf("%d ", k[i][j]);
        }
        printf("\n");
    }

    return 0;
}
