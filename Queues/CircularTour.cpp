#include<iostream>
using namespace std;

// Definition of a struct named petrolPump to represent a petrol pump with petrol and distance attributes
struct petrolPump
{
    int petrol;
    int distance;
};

// Function to find the starting petrol pump index from which the truck can complete the circular tour
int tour(petrolPump p[], int n){
    int deficit = 0; // Initialize deficit to track the total petrol deficit encountered
    int balance = 0; // Initialize balance to track the current petrol balance
    int start = 0;   // Initialize start to track the starting petrol pump index

    // Iterate through each petrol pump
    for(int i=0; i<n; i++){
        balance = p[i].petrol - p[i].distance; // Calculate the balance at the current petrol pump

        // If balance is negative (indicating deficit)
        if(balance < 0){
            deficit += balance; // Update deficit with the balance
            start = i+1;        // Update start to the next petrol pump index
            balance = 0;        // Reset balance to 0
        }
    }

    // If total balance plus deficit is less than or equal to 0, return the start index
    if(balance + deficit <= 0){
        return start;
    }
    // If the truck can't complete the circular tour, return -1
    else{
        return -1; // Note: There's a missing semicolon here
    }
}

// Main function
int main()
{
    // Your code here (not provided in this snippet)
    return 0;
}
