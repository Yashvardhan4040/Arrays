#include <iostream>
#include <vector>

int findMajorityElement(std::vector<int>& arr) {
    int res = 0;
    int count = 1;

    // Find a potential majority candidate
    for (int i = 1; i < arr.size(); i++) {
        if (arr[res] == arr[i]) {
            count++;
        } else {
            count--;
        }

        if (count == 0) {
            res = i;
            count = 1;
        }
    }

    // Verify if the potential candidate is the majority element
    count = 0;
    for (int j = 0; j < arr.size(); j++) {
        if (arr[res] == arr[j]) {
            count++;
        }
    }

    if (count > arr.size() / 2) {
        return arr[res]; // Return the majority element
    } else {
        return -1; // No majority element found
    }
}

int main() {
    std::vector<int> arr = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int result = findMajorityElement(arr);
    if (result != -1) {
        std::cout << "Majority element: " << result << std::endl;
    } else {
        std::cout << "No majority element found" << std::endl;
    }

    return 0;
}
