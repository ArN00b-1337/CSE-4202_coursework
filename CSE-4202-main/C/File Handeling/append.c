#include<stdio.h>
int main()
{
  FILE *file;
  char flight_name[10];
  int altitude;
  float speed;

  file= fopen("C:\\Users\\Student\\Desktop\\25024001\\File in C\\Flight Data\\data.txt", "a");

  if(file==NULL)
    printf("Error");

  printf("Enter Flight name: ");
  fgets(flight_name, sizeof(flight_name), stdin);

  printf("Enter Altitude: ");
  scanf("%d", &altitude);

  printf("Enter Aircraft speed: ");
  scanf("%f", &speed);

  fprintf(file, "\n%s", flight_name);
  fprintf(file, "%d ", altitude);
  fprintf(file, "%.2f", speed);

  fclose(file);
  return 0;
}