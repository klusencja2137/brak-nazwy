#include "stdio.h"
#include "stdlib.h"



void pisz(FILE *fp){
  if(fp==NULL){
    printf("Can't open the file.\n");
    exit(0);
  }
}




char *zw(){
char *str;
  printf("Jak ma się nazywać plik docelowy?\n");
  scanf("%s", str);
  return str;
}




void nadpisz(FILE *fp){
  char *cus = zw();
  FILE *wp = fopen( cus , "w");
  pisz(wp);
  int lic=0, ch;
  while((ch = getc(fp)) != EOF){
    if(lic++%3 == 0)
      putc(ch, wp);
  }
  fclose(fp);
  fclose(wp);
}





int main(int argc, char *argv[]){
  FILE *fp = fopen("tekscik.txt", "r");
  pisz(fp);
  nadpisz(fp);
}

//getc i putc odczytują z pliku, putc(ch,wp)
/*
fclose zwraca 0 gdy jest sukces

*/
