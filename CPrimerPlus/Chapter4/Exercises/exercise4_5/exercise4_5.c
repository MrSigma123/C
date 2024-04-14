// Write a program, which takes the speed of downloading (in megabits per second)
// and the size of the file to be downloaded (in Megabytes). Program should calculate
// the time of downloadind the file. Notice, that in this context one byte is equal to
// eight bits. Use the float type and the operater / to perform division. Program should
// write all three values (the speed of downloading, the file size and the calculated time)
// with the precision up to two digits after the floating point, like below:
//    With 18.12 megabits per second the file of the size 2.20 megabyte
//    will be downloaded in 0.97 of second(s)
#include <stdio.h>
#include <stdlib.h>
int main(void){
  float download_speed, file_size, time;
  printf("Enter the speed of the internet (in mbps): ");
  scanf("%f", &download_speed);
  printf("Enter the size of the file (in Mb), which is going to be downloaded: ");
  scanf("%f", &file_size);
  time = file_size/(download_speed/8);
  printf("With %f megabits per second the file of the size %f megabyte\n"
         "will be downloaded in %.2f second(s)", download_speed, file_size, time);
  return 0;
}
