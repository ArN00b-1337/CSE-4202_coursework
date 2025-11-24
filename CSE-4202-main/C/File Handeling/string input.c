#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *file;
  char input[50];
  file= fopen("C:\\Users\\Student\\Desktop\\25024001\\File in C\\String input\\input.txt", "w");

  if(file== NULL)
    printf("Error!");

  printf("Enter a string to write in the file: ");
  fgets(input, sizeof(input), stdin);

  fprintf(file, "%s", input);

  fclose(file);
  fgetch();
  return 0;
}