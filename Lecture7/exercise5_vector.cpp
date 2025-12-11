#include <iostream>
#include <vector>

// TODO: Implement this function
// It should take a 'const' reference to a vector,
// loop over its elements, and return their sum.
int sumVector(std::vector<int>& n) {
    int sum = 0;
    // TODO: Loop over the vector and add to sum
    for (int x:n){
        sum+=x;
    }
    return sum;
}

// TODO: Implement this function
// It should take a (non-const) reference to a vector
// and add 10 to *every* element in place.
void addTen(std::vector<int>& n) {
    // TODO: Loop over the vector.
    // Hint: You need a loop that gives you a *reference*
    // to each element, like:
    // for (int& val : v) { ... }
    for (int i=0;i<n.size();i++){
        n[i]+=10;
    }
}


int main() {
    std::vector<int> numbers = {1, 5, 10, 20};

    std::cout << "Original vector: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;

    // TODO: Call sumVector and print the result
    std::cout << "Sum: " << sumVector(numbers) << std::endl;

    // TODO: Call addTen
    addTen(numbers);

    std::cout << "Vector after addTen: ";
    for (int n : numbers) std::cout << n << " ";
    std::cout << std::endl;

    // TODO: Call sumVector again and print the new sum
    // std::cout << "New sum: " << sumVector(numbers) << std::endl;

    return 0;
}