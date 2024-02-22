
    #include <stdio.h>

// Structure to store car details
struct car {
    int car_id;
    char model[50];
    float rental_rate_per_day;
};

int main() {
    // Declare an array of struct car to store details of three cars
    struct car cars[2];

    // Input data for three cars
    for (int i = 0; i < 2; i++) {
        printf("Enter details for car %d:\n", i + 1);
        printf("Car ID: ");
        scanf("%d", &cars[i].car_id);
        printf("Model: ");
        scanf("%s", cars[i].model);
        printf("Rental rate per day: ");
        scanf("%f", &cars[i].rental_rate_per_day);
        printf("\n");
    }

    // Input the number of days for rental
    int num_days;
    printf("Enter the number of days for rental: ");
    scanf("%d", &num_days);

    // Calculate total rental cost for specified number of days
    float total_cost = 0;
    for (int i = 0; i < 2; i++) {
        total_cost += cars[i].rental_rate_per_day * num_days;
    }

    // Display the total rental cost
    printf("\nTotal rental cost for %d days: $%.2f\n", num_days, total_cost);

    return 0;
}
