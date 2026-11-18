#include <stdio.h>

int main(){

    char travelClass;
    float baggageWeight;
    float baseFare;
    float baggageAllowance;
    float excessBaggageFee;
    float totalFare;

    printf("Enter travel class(E-conomy / B-usiness): ");
    scanf(" %c", &travelClass);

    printf("Enter baggage weight (kg): ");
    scanf("%f", &baggageWeight);

    if(travelClass == 'E' || travelClass == 'e') {
        baseFare = 2500.00;
        baggageAllowance = 20;
    }
    else if(travelClass == 'B' || travelClass == 'b') {
        baseFare = 6500.00;
        baggageAllowance = 40;
    }
    else{
        printf("Invalid travel class!\n");
        return 0;
    }
    
    //validate baggage weight
    if(baggageWeight < 0) {
        printf("Invalid baggage weight!\n ");
        return 0;
    }
    //calculate excess baggage fee
    if(baggageWeight > baggageAllowance) {
        excessBaggageFee = (baggageWeight - baggageAllowance) * 150.00;
    }
    else {
        excessBaggageFee = 0.00;
    }
    //calculate total fare 
    totalFare = baseFare + excessBaggageFee;

    //Display Boarding Summary
    printf("\n-----BOARDING SUMMARY-----\n");

    if(travelClass == 'E' || travelClass == 'e'){
        printf("Travel Class:Economy\n");
    }
    else {
        printf("Travel Class: Business\n");
    }
    
    printf("Base Fare: PHP %.2f\n", baseFare);
    printf("Baggage Weight: %.1f kg\n", baggageWeight);
    printf("Baggage Allowance: %.0f kg\n", baggageAllowance);
    printf("Excess Baggage Fee: PHP %.2f\n", excessBaggageFee);
    printf("Total Fare: PHP %.2f\n", totalFare);



    printf("-----------------------------\n");

    return 0;

}
