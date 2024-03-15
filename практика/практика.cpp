#include <iostream>

int main() {
    // Задаємо масив
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Ініціалізуємо змінну для зберігання суми
    int sum = 0;

    // Обчислюємо суму всіх елементів масиву
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Виводимо результат
    std::cout << "Сума всіх елементів масиву: " << sum << std::endl;

    return 0;
}




#include <iostream>
#include <climits> // Для використання констант типів даних

int main() {
    // Задаємо масив
    int arr[] = { 10, 5, 25, -3, 15 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Ініціалізуємо змінні для зберігання мінімального та максимального елементів
    int min_element = INT_MAX; // Ініціалізуємо мінімальний елемент максимальним можливим значенням
    int max_element = INT_MIN; // Ініціалізуємо максимальний елемент мінімальним можливим значенням

    // Знаходимо мінімальний та максимальний елементи в масиві
    for (int i = 0; i < size; ++i) {
        if (arr[i] < min_element) {
            min_element = arr[i];
        }
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    // Виводимо результат
    std::cout << "Мінімальний елемент масиву: " << min_element << std::endl;
    std::cout << "Максимальний елемент масиву: " << max_element << std::endl;

    return 0;
}



#include <iostream>

int main() {
    // Задаємо масив
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Ініціалізуємо змінну для зберігання суми всіх елементів
    int sum = 0;

    // Обчислюємо суму всіх елементів масиву
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }

    // Обчислюємо середнє значення елементів
    double average = static_cast<double>(sum) / size;

    // Виводимо результат
    std::cout << "Середнє значення елементів масиву: " << average << std::endl;

    return 0;
}


#include <iostream>

int main() {
    // Визначаємо масив
    int arr[] = { 10, 20, 30, 40, 50 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву
    int target = 30; // Елемент, який потрібно знайти

    // Змінна для відстеження знаходження елемента
    bool found = false;

    // Перевіряємо, чи міститься певний елемент у масиві
    for (int i = 0; i < size; ++i) {
        if (arr[i] == target) {
            found = true;
            break;
        }
    }

    // Виводимо результат
    if (found) {
        std::cout << "Елемент " << target << " міститься у масиві." << std::endl;
    }
    else {
        std::cout << "Елемент " << target << " не міститься у масиві." << std::endl;
    }

    return 0;
}


#include <iostream>

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Обмін значень, якщо потрібно
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Визначаємо масив
    int arr[] = { 64, 25, 12, 22, 11 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Виводимо початковий масив
    std::cout << "Початковий масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Сортуємо масив
    bubbleSort(arr, size);

    // Виводимо відсортований масив
    std::cout << "Відсортований масив: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>

int main() {
    // Визначаємо масив
    int arr[] = { 10, 5, 7, 12, 8, 15, 20 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Ініціалізуємо лічильники для парних та непарних чисел
    int evenCount = 0;
    int oddCount = 0;

    // Підраховуємо кількість парних та непарних чисел
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    // Виводимо результат
    std::cout << "Кількість парних чисел у масиві: " << evenCount << std::endl;
    std::cout << "Кількість непарних чисел у масиві: " << oddCount << std::endl;

    return 0;
}


#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
    // Визначаємо масив
    int arr[] = { 10, 5, 7, 10, 12, 5, 7, 7 };
    int size = sizeof(arr) / sizeof(arr[0]); // Визначаємо розмір масиву

    // Створюємо словник для зберігання кількості входжень кожного елемента
    std::unordered_map<int, int> countMap;

    // Заповнюємо словник та підраховуємо кількість входжень кожного елемента
    for (int i = 0; i < size; ++i) {
        countMap[arr[i]]++;
    }

    // Визначаємо вектор для зберігання повторюваних елементів
    std::vector<int> duplicates;

    // Знаходимо повторювані елементи та додаємо їх до вектора
    for (const auto& pair : countMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    // Виводимо повторювані елементи
    std::cout << "Повторювані елементи у масиві: ";
    for (int i = 0; i < duplicates.size(); ++i) {
        std::cout << duplicates[i];
        if (i != duplicates.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}


#include <iostream>
#include <unordered_map>
#include <vector>

void findPairsWithSum(int arr[], int size, int targetSum) {
    // Створюємо словник для зберігання попередньо знайдених елементів
    std::unordered_map<int, int> hashMap;

    // Проходимо через масив і шукаємо пари елементів
    for (int i = 0; i < size; ++i) {
        int complement = targetSum - arr[i];

        // Якщо complement є у словнику, виводимо пару
        if (hashMap.find(complement) != hashMap.end()) {
            std::cout << "Пара з сумою " << targetSum << " знайдена: (" << complement << ", " << arr[i] << ")" << std::endl;
        }

        // Додаємо поточний елемент до словника
        hashMap[arr[i]] = i;
    }
}

int main() {
    int arr[] = { 1, 4, 6, 8, 2, 9, 3, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int targetSum = 10;

    findPairsWithSum(arr, size, targetSum);

    return 0;
}


#include <iostream>

// Функція для транспонування двовимірного масиву
void transpose(int matrix[][3], int rows, int cols) {
    int temp[cols][rows]; // Створюємо тимчасовий масив для зберігання результату транспонування

    // Переміщуємо дані з основного масиву у тимчасовий масив, транспонуючи їх
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            temp[j][i] = matrix[i][j];
        }
    }

    // Копіюємо транспоновані дані з тимчасового масиву у основний масив
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            matrix[i][j] = temp[i][j];
        }
    }
}

// Функція для виведення двовимірного масиву на екран
void printMatrix(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    // Задаємо двовимірний масив
    int matrix[3][3] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };
    int rows = 3;
    int cols = 3;

    std::cout << "Оригінальний масив:" << std::endl;
    printMatrix(matrix, rows, cols);

    // Транспонуємо масив
    transpose(matrix, rows, cols);

    std::cout << "\nТранспонований масив:" << std::endl;
    printMatrix(matrix, cols, rows);

    return 0;
}


#include <iostream>

// Функція для знаходження суми елементів на головній діагоналі
int sumMainDiagonal(int matrix[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

// Функція для знаходження суми елементів на побічній діагоналі
int sumSecondaryDiagonal(int matrix[][3], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - i - 1];
    }
    return sum;
}

int main() {
    const int n = 3; // Розмір квадратної матриці
    int matrix[n][n] = { {1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9} };

    // Знаходимо суму елементів на головній та побічній діагоналях
    int mainDiagonalSum = sumMainDiagonal(matrix, n);
    int secondaryDiagonalSum = sumSecondaryDiagonal(matrix, n);

    // Виводимо результат
    std::cout << "Сума елементів на головній діагоналі: " << mainDiagonalSum << std::endl;
    std::cout << "Сума елементів на побічній діагоналі: " << secondaryDiagonalSum << std::endl;

    return 0;
}


#include <iostream>
#include <vector>

// Функція для знаходження елементів у заданому діапазоні
std::vector<int> findElementsInRange(int matrix[][3], int rows, int cols, int minVal, int maxVal) {
    std::vector<int> elementsInRange;

    // Проходимо по кожному елементу у масиві
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            // Якщо елемент потрапляє у заданий діапазон, додаємо його до списку
            if (matrix[i][j] >= minVal && matrix[i][j] <= maxVal) {
                elementsInRange.push_back(matrix[i][j]);
            }
        }
    }

    return elementsInRange;
}

int main() {
    const int rows = 3;
    const int cols = 3;
    int matrix[rows][cols] = { {1, 2, 3},
                              {4, 5, 6},
                              {7, 8, 9} };

    int minVal = 3; // Мінімальне значення діапазону
    int maxVal = 7; // Максимальне значення діапазону

    // Знаходимо всі елементи у заданому діапазоні
    std::vector<int> elements = findElementsInRange(matrix, rows, cols, minVal, maxVal);

    // Виводимо знайдені елементи
    std::cout << "Елементи у діапазоні [" << minVal << ", " << maxVal << "]:" << std::endl;
    for (int element : elements) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
