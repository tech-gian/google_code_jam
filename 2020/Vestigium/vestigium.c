#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int T;
    scanf("%d", &T);

    for (int k=0 ; k<T ; k++) {
        int N;
        scanf("%d", &N);

        int** array = malloc(N*sizeof(int*));
        for (int i=0 ; i<N ; i++) {
            array[i] = malloc(N*sizeof(int));
            for (int j=0 ; j<N ; j++) {
                scanf("%d", &array[i][j]);
            }
        }



        int sum = 0;

        for (int i=0 ; i<N ; i++) {
            sum += array[i][i];
        }

        int rows = 0;
        for (int i=0 ; i<N ; i++) {
            int flag = 0;
            for (int j=0 ; j<N ; j++) {
                for (int m=j+1 ; m<N ; m++) {
                    if (array[i][j]==array[i][m]) {
                        rows++;
                        flag = 1;
                        break;
                    }
                }
                
                if (flag) break;
            }
        }


        int cols = 0;
        for (int j=0 ; j<N ; j++) {
            for (int i=0 ; i<N ; i++) {
                int flag = 0;
                for (int m=i+1 ; m<N ; m++) {
                    if (array[i][j]==array[m][j]) {
                        cols++;
                        flag = 1;
                        break;
                    }
                }
                
                if (flag) break;
            }
        }
        printf("Case #%d: %d %d %d\n", k+1, sum, rows, cols);
    }

    return 0;
}