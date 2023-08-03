
//------------------C-----------------------
#include <stdio.h>

int sum(const int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += arr[i];
    }
    return total;
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    printf("Sum: %d\n", sum(numbers, 5));
    return 0;
}


//-----------------C++-------------------------
#include <iostream>

class ArraySum {
private:
    int* arr;
    int size;

public:
    ArraySum(int* a, int s) : arr(a), size(s) {}

    int sum() const {
        int total = 0;
        for (int i = 0; i < size; ++i) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    ArraySum arraySum(numbers, 5);
    std::cout << "Sum: " << arraySum.sum() << std::endl;
    return 0;
}

//----------------------Template---------------

#include <iostream>

class ArraySum {
private:
    int* arr;
    int size;

public:
    ArraySum(int* a, int s) : arr(a), size(s) {}

    int sum() const {
        int total = 0;
        for (int i = 0; i < size; ++i) {
            total += arr[i];
        }
        return total;
    }
};

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    ArraySum arraySum(numbers, 5);
    std::cout << "Sum: " << arraySum.sum() << std::endl;
    return 0;
}


//---------------------STL------------------

#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    int total = std::accumulate(numbers.begin(), numbers.end(), 0);
    std::cout << "Sum: " << total << std::endl;
    return 0;
}
