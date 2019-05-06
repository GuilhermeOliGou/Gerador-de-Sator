#include <stdio.h>
#include <stdlib.h>


int main(){

    FILE* saida = fopen("saida.txt","w");

    char string[25];

    string[0] = 'O';
    string[4] = 'E';
    string[6] = 'P';
    string[8] = 'D';
    string[12] = 'I';
    string[16] = 'D';
    string[18] = 'P';
    string[20] = 'E';
    string[24] = 'O';

    int i,j,k,l,m;

    for (i = 0; i < 26; i ++){
        for (j = 0; j < 26; j++){
            for (k = 0; k < 26; k++){
                for (l = 0; l < 26; l++){
                    string[1] = (char)(65+i);
                    string[5] = (char)(65+i);
                    string[19] = (char)(65+i);
                    string[23] = (char)(65+i);

                    string[3] = (char)(65+k);
                    string[9] = (char)(65+k);
                    string[15] = (char)(65+k);
                    string[21] = (char)(65+k);

                    string[2] = (char)(65+j);
                    string[10] = (char)(65+j);
                    string[14] = (char)(65+j);
                    string[22] = (char)(65+j);

                    string[7] = (char)(65+l);
                    string[11] = (char)(65+l);
                    string[13] = (char)(65+l);
                    string[17] = (char)(65+l);

                    for (m = 0; m < 25; m++){
                        fprintf(saida,"%c ",string[m]);
                    }
                    fprintf(saida,"\n");
                }
            }
        }
    }
    return 0;
}
