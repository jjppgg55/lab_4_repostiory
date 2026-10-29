#define CATCH_CONFIG_MAIN  // Catch2 provides the main() function automatically
#include "catch_amalgamated.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// --- EXTRACED CORE FUNCTIONS TO TEST ---

// Finds the smallest number in an array
int find_smallest_element(int arr[], int size) {
    if (size <= 0) return 0;
    int smallest = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

// Counts the number of even integers in an array
int count_even_numbers(int arr[], int size) {
    int even_count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        }
    }
    return even_count;
}

// Deletes the first element by shifting remaining components left
void delete_first_element(int arr[], int& size) {
    if (size <= 0) return;
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    size--; // Reduce tracking size of the array
}


// --- CATCH2 AUTOMATED TEST SUITE ---

TEST_CASE("Finding the smallest number in an array", "[smallest]") {
    int arr1[5] = { 3, 2, 1, 7, 66 };
    int arr2[3] = { 10, -5, 20 };

    REQUIRE(find_smallest_element(arr1, 5) == 1);
    REQUIRE(find_smallest_element(arr2, 3) == -5);
}

TEST_CASE("Counting even numbers in an array", "[evens]") {
    int arr[5] = { 3, 2, 1, 7, 66 }; // 2 and 66 are even

    REQUIRE(count_even_numbers(arr, 5) == 2);
}

TEST_CASE("Deleting the first element of an array", "[delete]") {
    int size = 6;
    int array3[6] = { 16, 5, 7, 32, 1, 12 };

    delete_first_element(array3, size);

    REQUIRE(size == 5);          // The size tracking should decrease
    REQUIRE(array3[0] == 5);     // The new first element should be 5 instead of 16
    REQUIRE(array3[4] == 12);    // The final element shifted cleanly
}
