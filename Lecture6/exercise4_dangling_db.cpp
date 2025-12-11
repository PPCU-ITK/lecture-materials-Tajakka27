#include <iostream>
#include <string>
#include <vector>

struct Student {
    int id;
    std::string name;
};

/**
 * @brief Sets up the student database correctly.
 * Returns a std::vector<Student> by value.
 */
std::vector<Student> setup_database() {
    // single vector on the stack
    std::vector<Student> student_db = {
        {201, "David"},
        {202, "Eve"}
    };

    std::cout << "Inside setup_database():" << std::endl;
    std::cout << "  'student_db' data is at address: " << student_db.data() << std::endl;

    return student_db;  // vector is copied or moved. safe
}

int main() {
    std::cout << "Calling setup_database()..." << std::endl;
    std::vector<Student> db = setup_database();

    std::cout << "\nIn main():" << std::endl;
    std::cout << "  db.data() holds address: " << db.data() << std::endl;

    std::cout << "  Accessing valid data... " << std::endl;
    if (!db.empty()) {
        std::cout << "  Found student: " << db[0].name << std::endl;
    }

    return 0;
}
