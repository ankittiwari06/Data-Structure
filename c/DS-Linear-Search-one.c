#include <stdio.h>

// array of items on which linear search will be conducted.
int intArray[50] = {1,3,5,6,7,9,11,12,13,15,16,18,20,21,22,25,28,31,33,34,43,45,55,66};


// this method makes a linear search. 
int find(int data) {

   int comparisons = 0;
   int index = -1;
   int i;

   // navigate through all items 
   for(i = 0;i<24;i++) {
	
      // count the comparisons made 
      comparisons++;
		
      // if data found, break the loop
      if(data == intArray[i]) {
         index = i;
         break;
      }
   }   
	
   printf("Total comparisons made: %d", comparisons);
   return index;
}

void display() {
   int i;
   printf("[");
	
   // navigate through all items 
   for(i = 0;i<24;i++) {
      printf("%d ",intArray[i]);
   }
	
   printf("]\n");
}

main() {
   printf("Input Array: ");
   display();

   //find location of 1
   int location = find(28);

   // if element was found 
   if(location != -1)
      printf("\nElement found at location: %d" ,(location+1));
   else
      printf("Element not found.");
}
