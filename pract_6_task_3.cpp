#include <iostream>
#include <stack>
#include <string>

int main() {
    // ��������� ����� ��� �����
    std::stack<std::string> stringStack;

    // ��������� ����� �� �����
    stringStack.push("apple");
    stringStack.push("banana");
    stringStack.push("cherry");

    int totalCharacters = 0;

    // ϳ�������� �������� ������� �������
    while (!stringStack.empty()) {
        std::string currentString = stringStack.top(); // �������� ������ �����
        stringStack.pop(); // ��������� ���� � �����
        totalCharacters += currentString.length(); // ������ ������� ����� �� �������� �������
    }

    // ���� ����������
    std::cout << "Summ of symvols in program: " << totalCharacters << std::endl;

    return 0;
}
