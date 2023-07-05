#include <stdio.h>
#include <math.h>

// Function to calculate the distance between two points
float dist1(int x1, int x2, int y1, int y2){
   // Calculate the distance using the distance formula
   float dist = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));

   return dist;
}



int main(){
   int x1, x2, y1, y2;
   printf("Enter the coordinate x1, y1, x2, y2 of vectors: ");
   scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    
   // Call the dist1 function to calculate the distance    
   printf("The distance is equal to: %f\n", dist1(x1, x2, y1, y2));
    
   return 0;
}