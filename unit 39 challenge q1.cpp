#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
class QuizScores {
private:
    std::vector<T> scores;

public:
    QuizScores(int n) : scores(n) {}

    void readScores() {
        for (int i = 0; i < scores.size(); ++i) {
            std::cin >> scores[i];
        }
    }

    void findTopTwo() {
        std::sort(scores.begin(), scores.end(), std::greater<T>());
        std::cout << scores[0] << " " << scores[1] << std::endl;
    }
};

int main() {
    // Input for integer scores
    int n;
    std::cin >> n;
    QuizScores<int> intScores(n);
    intScores.readScores();
    intScores.findTopTwo();

    // Input for floating-point scores
    QuizScores<double> floatScores(n);
    floatScores.readScores();
    floatScores.findTopTwo();

    return 0;
}
