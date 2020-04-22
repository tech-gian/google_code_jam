#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int n;
    scanf("%d", &n);;

    for (int k=0 ; k<n ; k++) {
        char string[32];
        char string_out[32];

        scanf("%s", string);

        int j = 0;
        for (int i=0 ; i<strlen(string) ; i++) {
            if (string[i]=='1') {
                if (i){
                    if (string[i-1]!=string[i]) {
                        string_out[j] = '(';
                        j++;
                    }
                }
                else {
                    string_out[j] = '(';
                    j++;
                }
            }
            string_out[j] = string[i];
            j++;
            if (string[i]!=string[i+1] && string[i]!='0') {
                string_out[j] = ')';
                j++;
            }
        }
        string_out[j] = '\0';
        printf("Case #%d: %s\n", k+1, string_out);
    }

    return 0;
}