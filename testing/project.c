#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void printlist(double arr[], int n)
{
    int i;
    for(i=0; i<n; i++)
        printf("%0.2lf ", arr[i]);
    printf("\n");
}

int main(void)
{
    /* ---------- Inputs -----------------*/
    printf("** Start **\n");
    printf("Please enter dimensions X0,....X9(in feet)\n");
    int i, j;
    double X[10];
    for(i=0; i<10; i++)
    {
        printf("Enter X%d: ", i);
        scanf("%lf", &X[i]);
        printf("\n");
    }
    //printlist(X, 10);
    printf("Please enter dimensions Y0,....Y9(in feet)\n");
    double Y[8];
    for(i=0; i<8; i++)
    {
        printf("Enter Y%d: ", i);
        scanf("%lf", &Y[i]);
        printf("\n");
    }
    //printlist(Y, 8);
    
    double Z;
    printf("Enter Ceiling Height: ");
    scanf("%lf", &Z);
    
    double Siding_Cost;
    printf("Enter Siding Cost(/sq ft): ");
    scanf("%lf", &Siding_Cost);

    double Roofing_Cost;
    printf("Enter Roofing Cost(/sq ft): ");
    scanf("%lf", &Roofing_Cost);

    double Deck_Cost;
    printf("Enter Deck Cost(/sq ft): ");
    scanf("%lf", &Deck_Cost);
    /* --------------- Outputs ---------------- */
    double lot1=0, lot2=0;
    for(i=0; i<10; i++)
        lot1=lot1+X[i];
    for(i=0; i<8; i++)
        lot2=lot2+Y[i];
    printf("Lot size: %0.2lf sq ft x %0.2lf sq ft\n", lot1, lot2);
    
    double area;
    area=(lot1-X[0]-X[9])*(lot2-Y[0]-Y[1]-Y[7]);
    double deck, patio, driveway;
    deck=(X[1]+X[2]+X[3])*Y[1];
    patio=(X[5]+X[6])*Y[1];
    driveway=(X[1]+X[2]+X[3])*Y[7];

    area=deck+patio+driveway;
    printf("House Area(in sq ftxsq feet): %0.2lf\n", area);
    
    double garage, porch;
    garage=(X[1]+X[2]+X[3])*(Y[5]+Y[6]);
    porch=X[5]*Y[6];
    printf("Interior Area(in sq ftxsq feet): %0.2lf\n", area-garage-porch);

    printf("Interior Colume(in cu ft): %0.2lf\n", area*Z);
	return 0;
}