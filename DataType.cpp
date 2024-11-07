#include<iomanip>
#include<iostream>
#include<cmath>

using namespace std;

// Calculate the maximum value calculation
/**
 * @brief Calculates the maximum value for a signed integer data type.
 *
 * This function computes the maximum possible value for a signed integer
 * data type based on its size in bytes.
 *
 * @param sizeOfDataType The size of the data type in bytes.
 * @return The maximum value as a double, calculated as 2^(bits - 1) - 1.
 */
double calculateSignedMax(int sizeOfDataType){
    int bits = sizeOfDataType * 8;
    return pow(2, bits - 1) - 1; // 2^(n-1) - 1
}

/**
 * @brief Calculates the minimum value for a signed integer data type.
 *
 * This function computes the minimum possible value for a signed integer
 * data type based on its size in bytes.
 *
 * @param sizeOfDataType The size of the data type in bytes.
 * @return The minimum value as a double, calculated as -2^(bits - 1).
 */
double calculateSignedMin(int sizeOfDataType){
    int bits = sizeOfDataType * 8;
    return pow(2, bits - 1);
}

/**
 * @brief Calculates the minimum value for a floating-point data type.
 *
 * This function computes the minimum possible value for a floating-point
 * data type based on its size in bytes. It assumes a binary representation
 * where one bit is reserved for the sign.
 *
 * @param sizeOfDataType The size of the data type in bytes.
 * @return The minimum value as a double, calculated as -2^(bits - 1).
 */
double calculateMin(int sizeOfDataType){
    int bits = sizeOfDataType * 8 - 1;
    return -pow(2, bits);
}

/**
 * @brief Calculates the maximum value for a floating-point data type.
 *
 * This function computes the maximum possible value for a floating-point
 * data type based on its size in bytes. It assumes a binary representation
 * where one bit is reserved for the sign.
 *
 * @param sizeOfDataType The size of the data type in bytes.
 * @return The maximum value as a double, calculated as 2^(bits - 1).
 */
double calculateMax(int sizeOfDataType){
    int bits = sizeOfDataType * 8 - 1;
    return pow(2, bits);
}

/**
 * @brief Formats and prints a table row with data type information.
 *
 * This function takes a data type name and its corresponding minimum and maximum values,
 * and prints them in a formatted table row to the console.
 *
 * @param dataType The name of the data type as a string.
 * @param min The minimum value of the data type as a double.
 * @param max The maximum value of the data type as a double.
 *
 * @return This function does not return a value.
 */
void formatTable(string dataType, double min, double max){
    cout << setw(15) << left << dataType << setw(35) << right << fixed << min << setw(35) << fixed << max << endl;
}

/**
 * @brief Main function that demonstrates the size and range of various data types.
 *
 * This function declares variables of different data types, prints their sizes,
 * and then displays a table showing the minimum and maximum values for each type.
 * It uses helper functions to calculate and format the output.
 *
 * @return Returns 0 upon successful execution.
 */
int main() {

    int integerType; 
    char charType; 
    float floatType; 
    double doubleType;
    bool boolType;

    // Sizeof the data types
    cout << "Size of int" << setw(15) << right << sizeof(integerType) << " Bytes" << endl;
    cout << "Size of char" << setw(15) << right << sizeof(charType) << " Bytes" << endl;
    cout << "Size of float" << setw(15) << right << sizeof(floatType) << " Bytes" << endl;
    cout << "Size of double" << setw(15) << right << sizeof(doubleType) << " Bytes" << endl;
    cout << "Size of bool" << setw(15) << right << sizeof(boolType) << " Bytes" << endl;

    // Int data type min and max limit output
    cout << left << setw(30) << "Data Type " << right << setw(20) << "Min" << right << setw(35) << "Max" << endl;
    formatTable("Char", calculateSignedMin(sizeof(char)), calculateSignedMax(sizeof(char)));
    formatTable("Boolean", 0, 1);
    formatTable("Int", calculateSignedMin(sizeof(int)), calculateSignedMax(sizeof(int)));
    formatTable("float", calculateMin(sizeof(float)), calculateMax(sizeof(float)));
    formatTable("Double", calculateMin(sizeof(double)), calculateMax(sizeof(double)));
    return 0;
}
