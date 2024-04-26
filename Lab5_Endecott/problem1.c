#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
FILE *fptr;

/*open file in read mode*/
fptr = fopen("prob1_input.txt", "r");

/*store file content*/
char fileContent[100];

const char *months[] ={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

/*save each line in file as member of array*/
double sales[12];

/*counter will ensure each line is added in order*/
int counter = 0;

/*loop through every line in file and save it to array*/
while(fgets(fileContent, 100, fptr)) {
    sales[counter] = atof(fileContent);
    ++counter;
}

/*part 1*/
printf("Monthly Sales Reports\n");
printf("Month \t Sales\n");
int i;
for (i=0; i<12; i++){
    printf("%s\t$%.2lf\n",months[i],sales[i]);
}

/*part 2*/
int idx = 0;
for (i=0; i<12; i++){
    if (sales[idx] < sales[i]){
        idx = i;
    }
}
printf("%.2lf\t",sales[idx]);

}
