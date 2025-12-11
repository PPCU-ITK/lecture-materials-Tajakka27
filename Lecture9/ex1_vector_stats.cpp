#include <iostream>
#include <vector>
#include <algorithm> // Useful for sorting if you do the bonus
#include <numeric>   // Useful for std::accumulate

void analyze_data(const std::vector<int>& data) {
    if (data.empty()) {
        std::cout << "No data to analyze." << std::endl;
        return;
    }

    // TODO: Calculate the mean (average)
    double mean = 0.0;
    // Hint: Iterate and sum, or use std::accumulate

    // TODO: Find the min and max elements
    int size=0;
    int min_val = 999999;
    int max_val = 0;
    // Hint: You can iterate, or use std::min_element / std::max_element
    for (double val : data) {
        mean+=val;
        size++;
        if (val<min_val){
            min_val=val;
        }
        if (val>max_val){
            max_val=val; 
        }          
    }
    mean/=size;


    //  // Mean
    // double mean = std::accumulate(data.begin(), data.end(), 0.0) / data.size();

    // // Min and Max
    // int min_val = *std::min_element(data.begin(), data.end());
    // int max_val = *std::max_element(data.begin(), data.end());
    std::cout << "Statistics:" << std::endl;
    std::cout << "  Count: " << data.size() << std::endl;
    std::cout << "  Mean:  " << mean << std::endl;
    std::cout << "  Min:   " << min_val << std::endl;
    std::cout << "  Max:   " << max_val << std::endl;
}

int main() {
    // Test data
    std::vector<int> readings = {12, 5, 89, 5, 43, 12, 9, 100, 54};
    
    std::cout << "Analyzing sensor readings..." << std::endl;
    analyze_data(readings);

    return 0;
}