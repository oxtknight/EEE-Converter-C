#include<stdio.h>
#include<math.h>
void printmenu(){
    printf("\n -------EEE Converter------\n");
    printf("1-Ohm's Law calculator (V,I,R)\n");
    printf("2-Parallel Resistors (R1||R2)\n");
    printf("3-Frequency to Period (f <=> T)\n");
    printf("4-RMS to Peak voltage\n");
    printf("5-Quit\n");
    printf("Select an option:");
}
int main(){
    int choice ;
    double val1,val2,result;
    while (1){ 
        printmenu();
        scanf("%d",&choice);
        if (choice == 5) break;
        switch (choice){
            case 1: 
                printf("Enter the voltage:(if unknown enter 0)"); 
                scanf("%lf",&val1);
                printf("\nEnter the current:(if unknown enter 0)");
                scanf("%lf",&val2);
                if (val1==0){
                    printf("Enter resistance:");
                    scanf("%lf",&result);
                    printf("Voltage = %.2f V\n",val2*result);
                } else if (val2==0) {
                   printf("Enter resistance:");
                   scanf("%lf",&result);
                   printf("Current = %.2f A\n",val1/result);
                }
                break;
           case 2:
                printf("Enter R1:");
                scanf("%lf",&val1);
                printf("Enter R2:");
                scanf("%lf",&val2);
                result= (val1*val2)/(val1 + val2);
                printf("The equivalent resistance= %.2f Ohms \n",result);
                break;
           case 3:
                printf("Enter the frequency (Hz):");
                scanf("%lf",&val1);
                printf("The period = %.5f seconds \n", 1.0/val1);
                break;
          case 4: 
                printf("Enter the RMS voltage:");
                scanf("%lf",&val1);
                printf("The peak voltage = %.2f V", val1* sqrt(2));
                break;
          default:
                printf("Invalid choice.\n");
               }}
    return 0;
}
