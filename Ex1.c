#include<stdio.h>
#include<conio.h> 
#include<string.h>
int main(){
    /*
    FILE *f  ; 
    fopen("file_name","mode") ; 
    "r" : reading files 
    "w" : writting 
    "a" : append 
    "r+" : reading and writting
    "w+" : writting and reading 
    "a+" : reading and writting 
    "rb" : working with binary files (same as everything but add b at the end) 
    fputc():write characters to the file
    fputc(character,file_pointer) 
    fputs : write string to the file
    fputs(string , file_pointer) 
    fprintf : write in a file in a formative way (other than just character and string)
    fprinf(file_pointer, "format specifier" , list of variables)
    fgetc : get a character from the file 
    ch = fgetc(f) : return a character we read from the file
    feof() : return true when the file has hit the end 
    */
   FILE *f ; 
   char data[30] = "Le Quoc Viet2" ;  
   char ch ;   
   f = fopen("Viet.txt" , "r");
   if(f == NULL)
        printf("Unable to create a file");
   else{
        printf("File open successful") ; 
   } 
//    for (int i = 0; i < strlen(data); i++)
//    {
//         printf("Writting the character %c \n" , data[i]) ; 
//         fputc(data[i] , f) ;
//    }
// fputs(data , f) ; 
// for (int i = 0; i < 10; i++)
// {
//    fprintf(f , "%d\n" , i) ; 
// }
while(!feof(f)){
ch = fgetc(f) ; 
printf("%c", ch) ;
}
   fclose(f) ; 
   getch() ; 
   return 0  ;
}