#include <iostream>
#include <fstream>
using namespace std;

// Question Class
class Question
{
public:
    string question;
    string optionA, optionB, optionC, optionD;
    char correctAnswer;

    Question(string q, string a, string b, string c, string d, char ans)
    {
        question = q;
        optionA = a;
        optionB = b;
        optionC = c;
        optionD = d;
        correctAnswer = ans;
    }

    void display()
    {
        cout << "\n" << question << endl;
        cout << "A. " << optionA << endl;
        cout << "B. " << optionB << endl;
        cout << "C. " << optionC << endl;
        cout << "D. " << optionD << endl;
    }
};

// Player Class
class Player
{
public:
    string name;
    int score;

    Player(string n)
    {
        name = n;
        score = 0;
    }

    void showResult()
    {
        cout << "\n" << name << "'s Final Score: "
             << score << "/5" << endl;
    }
};

// Quiz Class
class Quiz
{
public:
    void startQuiz(Player &p)
    {
        Question questions[5] =
        {
            Question("Which language is used in this project?",
                     "Java", "C++", "Python", "C", 'B'),

            Question("What does OOP stand for?",
                     "Object Oriented Programming",
                     "Online Object Program",
                     "Object Output Program",
                     "Open Object Programming", 'A'),

            Question("Which symbol is used to end a statement in C++?",
                     ".", ",", ";", ":", 'C'),

            Question("Which function is the starting point of a C++ program?",
                     "start()", "main()", "begin()", "run()", 'B'),

            Question("Which concept is used to store data in a file?",
                     "File Handling", "Looping",
                     "Inheritance", "Array", 'A')
        };

        char answer;

        for(int i = 0; i < 5; i++)
        {
            cout << "\nQuestion " << i + 1 << ":";
            questions[i].display();

            cout << "Enter your answer: ";
            cin >> answer;

            if(toupper(answer) == questions[i].correctAnswer)
            {
                cout << "Correct Answer!" << endl;
                p.score++;
            }
            else
            {
                cout << "Wrong Answer!" << endl;
            }
        }

        p.showResult();

        // Save result
        ofstream file("results.txt", ios::app);
        file << p.name << " - Score: "
             << p.score << "/5" << endl;
        file.close();

        cout << "Result saved successfully!" << endl;
    }
};

int main()
{
    string name;

    cout << "===== QUIZ GAME SYSTEM =====" << endl;
    cout << "Enter Player Name: ";
    cin >> name;

    Player player(name);
    Quiz quiz;

    quiz.startQuiz(player);

    return 0;
}
