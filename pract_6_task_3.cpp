#include <iostream>
#include <stack>
#include <string>

int main() {
    // Створення стека для рядків
    std::stack<std::string> stringStack;

    // Додавання рядків до стека
    stringStack.push("apple");
    stringStack.push("banana");
    stringStack.push("cherry");

    int totalCharacters = 0;

    // Підрахунок загальної кількості символів
    while (!stringStack.empty()) {
        std::string currentString = stringStack.top(); // Отримуємо верхній рядок
        stringStack.pop(); // Видаляємо його зі стека
        totalCharacters += currentString.length(); // Додаємо довжину рядка до загальної кількості
    }

    // Вивід результату
    std::cout << "Summ of symvols in program: " << totalCharacters << std::endl;

    return 0;
}
