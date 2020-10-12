#include "../inc/mxlib.h"

int main(int argc, char *args[]){
    if(argc == 2){
        char *alfabet[] = {"a", "b", "c", "d", "e", "f", "g", "h", "i", "j",
        "k", "l", "m", "n", "o", "p", "q", "r", "s", "t", "u", "v", "w",
        "x", "y", "z", "A", "B", "C", "D", "E", "F", "G", "H", "I", "J",
        "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W",
        "X", "Y", "Z", ",", "?", "\'", ".", "-","\"", ":", "/", "!", " ", NULL
        };
        char *atbash[] = {"z", "y", "x", "w", "v", "u", "t",
        "s", "r", "q", "p", "o", "n", "m", "l", "k",
        "j", "i", "h", "g", "f", "e", "d", "c","b",
        "a", "Z", "Y", "X", "W", "V", "U", "T",
        "S", "R", "Q", "P", "O", "N", "M", "L", "K",
        "J", "I", "H", "G", "F", "E", "D", "C","B",
        "A", ",", "?", "\'", ".","-", "\"", ":", "/", "!", "\n", NULL
        };
        char *str = args[1];
        char s = ' ';
        int len = 0;
        while (atbash[len] != NULL) {
            len++;
        }

        for(int i = 0; i < mx_strlen(str); i++){
                    if(str[i] == s) {
                        mx_printchar(' ');
                    }
            for(int j = 0; j < len; j++){
                    if(str[i] == atbash[j][0]){
                        mx_printstr(alfabet[j]);
                    }
            }
        }
        mx_printchar('\n');
    }
    else{
        mx_printerr("usage: ./atbash \"str\"\n");
        return 0;
    }
    return 0;
}
