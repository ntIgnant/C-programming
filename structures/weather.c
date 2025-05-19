#include <stdio.h>
#include <stdlib.h> // To use malloc (dynamic memory allocation)

typedef struct Weather{
    float temperature; // this value should be in degrees
    int preassure; //this value should be in pascal

}Weather; // assign the name of the struct

// Function to print the values inside of weather instances
void print_weather(Weather *we){ // Expects (Weather type) pointer to the weather instance
    float tmp_temperature = we->temperature; // Same as saying tmp_temperature = (*we).temperature
    int tmp_preassure =we->preassure; // Same as saying tmp_preassure = (*we).preassure
    
    // Print the values
    printf("Temperature: %lf\nPreassure: %d\n", tmp_temperature, tmp_preassure); // Float, int
    
}

// Function to get the values for the instance of Weather
void scan_weather(Weather *w){ // Expects a pointer as argument
    float tem_val;
    int prea_val;

    printf("Enter the value for temperature: ");
    scanf("%f", &tem_val); // %lf would be for a double

    printf("Enter the value for preassure: ");
    scanf("%d", &prea_val);

    // Assign the values to the given struct instance
    w->temperature = tem_val; // same as (*w).temperature = tem_val
    w->preassure = prea_val; // same as (*w).preassure = prea_val
                             // oke
}

int main(){
    
    // Dynamically allocate memory for the struct instance
    Weather *weather1 = (Weather *)malloc(sizeof(Weather));
    
    /*
    // Assign the values to the struct instance
    weather1->temperature = -17.222; // this is the same as saying '(*weather1).temperature = -17.222'
    // Assignation to the preassure value (with the other)
    (*weather1).preassure = 101325;
    */

    // Assign the values with the function scan_weather
    scan_weather(weather1);

    // Print the values of the weather with the function
    print_weather(weather1); // Pass the pointer to the strut instance of weather
    
    return 0;
}
