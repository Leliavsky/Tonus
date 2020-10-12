#include "../inc/mxlib.h"

int mx_toupper(int c) {
  if (c>=97 && c<123){
      c-=32;
      char buff=c;
      return buff;
    }
    else {
    char buff=c;
    return buff;
    }
}
