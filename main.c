

#include <stdio.h>

int main(void) {
  int s;
  int d;


  scanf("%d %d", &s, &d);

printf("Enter systolic pressure:");
scanf("%d", &s);
printf("Enter diastolic pressure:");
scanf("%d", &d);
if(s < 120 && d <80) {
  printf("Normal");
}
else if((s >= 120) && (s <= 129) && (d <= 80)) {
  printf("Elevated");
}
else if((s <= 140) || (d <= 90)) {
  printf("Stage 1 Hypertension");
}
else if((s <= 141) && (d >= 90)) {
  printf("Stage 2 Hypertension");
}
else if((s >= 180) && (d >= 120)) {
  printf("Hypertensive Crysis");
}
else if(s < d) {
  printf("ERROR");
}

}