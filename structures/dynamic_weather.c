#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation (malloc, calloc)

// Structure for weather
typedef struct Weather{
    
    double temperature;
    int pressure;

}Weather;


int main(){
    
    // For this one, there will be created 3 different instances of the struct weather
    
    //Weather weather_inst[3]; // This is the way to create 3 different (static) instances of the struct

    // Dynamic way
    Weather *dyna_weather = (Weather*)malloc(3 * sizeof(Weather)); // Typecast the type of the pointer
                                                                  // which is type Weather (strcut)
    // Check if dynamic memory allocation failed
    if(dyna_weather == NULL){
        printf("Memory allocation failed bruh\n");
        exit(1); // Exit 1 (exit with error code)
    }

    // Assign the values for each weather instance

    for(int j = 0; j < 3; j++){
        printf("-Current Weather Ninstance: %d\n", j+1);

        // Ask the user to enter values
        printf("Enter Temperature and preassure: ");
        scanf("%lf %d", &dyna_weather[j].temperature, &dyna_weather[j].pressure); // %lf for double in scanf
    }

    printf("Data compiled!\n");

    // Print out the results
    for(int p = 0; p < 3; p++){
        printf("Weather %d: Temperature: %.3f | Pressure %d\n", p+1, dyna_weather[p].temperature, dyna_weather[p].pressure);
    }

    // Free the dynamically allocated memory
    // Just free the dynamically allocated array of struct instances
    free(dyna_weather);

    return 0;
}
