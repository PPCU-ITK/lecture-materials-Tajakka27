#include <iostream>
#include <vector>
#include <string>
#include <map>

int main() {
    std::vector<std::string> words = {
        "apple", "banana", "apple", "cherry", "date", 
        "banana", "apple", "fig", "cherry"
    };

    std::map<std::string, int> counts;
    
    // TODO: 2. Iterate through the 'words' vector.
    //          For each word, increment its count in the map.
    //          Hint: counts[word]++ works even if the key doesn't exist yet!
    for (std::string  s: words){
        counts[s]++;
    }

    std::cout << "Word Frequencies (Sorted automatically by Map):" << std::endl;

    // TODO: 3. Iterate through the map and print "Word: Count"
    //          Hint: use 'for (auto const& [word, count] : counts)' 
    //          OR 'for (auto it = counts.begin(); it != counts.end(); ++it)'
    for (auto it = counts.begin(); it != counts.end(); ++it) {
        std::cout << it->first << ": " << it->second << std::endl;
    }

     // 3. Print results
    // for (const auto& [word, count] : counts) {
    //     std::cout << word << ": " << count << "\n";
    // }

    return 0;
}