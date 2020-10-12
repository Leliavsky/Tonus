#include "../inc/mxlib.h"

int mx_tolower(int c) {
    if (c>=65 && c<91){
        c+=32;
        char buff=c;
        return buff;
      }
        else{
          char buff=c;
          return buff;
          }
}
