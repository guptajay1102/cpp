#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool isSupportedType(T) {
  return is_same<T, string>::value;
}

string convertToUppercase(const string& input) {
  if (!isSupportedType(input)) {
    throw invalid_argument("Unsupported data type for conversion.");
  }

  string result = input;
  for (char& c : result) {
    c = toupper(c);
  }
//convertString
  return result;
}

string convertToLowerCase(const string& input) {
  if (!isSupportedType(input)) {
    throw invalid_argument("Unsupported data type for conversion.");
  }

  string result = input;
  for (char& c : result) {
    c = tolower(c);
  }

  return result;
}

string convertFirstLetterToUpper(const string& input) {
  if (!isSupportedType(input)) {
    throw invalid_argument("Unsupported data type for conversion.");
  }

  string result = input;
  bool isFirstLetter = true;
  for (char& c : result) {
    if (isFirstLetter) {
      c = toupper(c);
      isFirstLetter = false;
    } else if (c == ' ') {
      isFirstLetter = true;
    }
  }

  return result;
}

int main() {
  string inputString;
  char choice;

  try {
    getline(cin, inputString);
    cin >> choice;

    string result;
    switch (choice) {
      case 'U':
        result = convertToUppercase(inputString);
        break;
      case 'L':
        result = convertToLowerCase(inputString);
        break;
      case 'F':
        result = convertFirstLetterToUpper(inputString);
        break;
      default:
        throw invalid_argument("Invalid choice. Please enter U, L, or F.");
    }

    if (isSupportedType(inputString)) {
      switch (choice) {
        case 'U':
          cout << "Uppercase string: " << result << endl;
          break;
        case 'L':
          cout << "Lowercase string: " << result << endl;
          break;
        case 'F':
          cout << "String with first letter of each word capitalized: " << result << endl;
          break;
      }
    } else {
      cout << "Unsupported data type for conversion." << endl;
    }
  } catch (const invalid_argument& e) {
    cout << e.what() << endl;
  }

  return 0;
}
