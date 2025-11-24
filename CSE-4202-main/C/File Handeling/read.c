#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *file;
  char flight_name[30];
  int altitude;
  float speed;

  file= fopen("C:\\Users\\Student\\Desktop\\25024001\\File in C\\Flight Data\\data.txt", "r");

  if(file==NULL)
    printf("Error");

  fgets(flight_name, sizeof(flight_name), file);
  fscanf(file, "%d", &altitude);
  fscanf(file, "%f", &speed);

  printf("Flight name : %s", flight_name);
  printf("Altitude(ft): %d\n", altitude);
  printf("Speed(Knots): %.2f", speed);

  printf("\n");
  fclose(file);
  getch();
  return 0;
}