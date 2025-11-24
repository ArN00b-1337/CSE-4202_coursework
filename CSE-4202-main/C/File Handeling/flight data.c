#include<stdio.h>
#include<conio.h>
int main()
{
  FILE *file;
  char flight_name[10];
  int altitude;
  float speed;

  file= fopen("C:\\Users\\Student\\Desktop\\25024001\\File in C\\Flight Data\\data.txt", "w");

  if(file==NULL)
    printf("Error");

  printf("Enter Flight name          : ");
  fgets(flight_name, sizeof(flight_name), stdin);

  printf("Enter Altitude(ft)         : ");
  scanf("%d", &altitude);

  printf("Enter Aircraft speed(knots): ");
  scanf("%f", &speed);
  printf("Data saved to data.txt successfully!");

  fprintf(file, "%s", flight_name);
  fprintf(file, "%d ", altitude);
  fprintf(file, "%.2f", speed);

  fclose(file);
  return 0;
}