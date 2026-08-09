#include <iostream>
#include <string>
using namespace std;

class quiz
{

private:
    string Name;
    int Score;

public:
    void Startquiz()
    {
        Score = 0;
    }

    void displayData()
    {

        cout << "Enter your name: ";
        cin >> Name;

        cout << "------------------------WELCOME TO THE GAME--------------------------" << endl;
    }

    void question1()
    {

        int answer;

        cout << "In which season Holly was introduced in the show: " << endl;
        cout << "1.season 3" << endl;
        cout << "2.season 7" << endl;
        cout << "3.season 5" << endl;
        cout << "4.season 4" << endl;

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == 4)
        {
            cout << "Correct Answer! " << endl;
            Score++;
        }

        else
        {
            cout << "Wrong Option." << endl;
        }
    }

    void question2()
    {
        int answer;

        cout << "With whom did Erin end up together in the last? " << endl;
        cout << "1.Gabe" << endl;
        cout << "2.Pete" << endl;
        cout << "3.Andy" << endl;
        cout << "4.Deryl" << endl;

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == 2)
        {
            cout << "Correct Answer!" << endl;
            Score++;
        }

        else
        {
            cout << "Wrong option." << endl;
        }
    }

    void question3()
    {

        int answer;
        cout << "What was the name of Michael's movie? " << endl;
        cout << "1.Scoops Troop" << endl;
        cout << "2.Michael Scott Paper Company" << endl;
        cout << "3.Threat Level Midnight" << endl;
        cout << "4.Scott Totts" << endl;

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == 3)
        {
            cout << "Correct Answer!" << endl;
            Score++;
        }
        else
        {
            cout << "Incorrect option." << endl;
        }
    }

    void question4()
    {
        int answer;

        cout << "Which university did Andy went to? " << endl;
        cout << "1.Harvard" << endl;
        cout << "2.Yale" << endl;
        cout << "3.Colombia" << endl;
        cout << "4.Cornell" << endl;

        cout << "Enter your answer: ";
        cin >> answer;

        if (answer == 4)
        {

            cout << "Correct answer!" << endl;
            Score++;
        }

        else
        {
            cout << "Wrong option" << endl;
            cout<<endl;
        }
    }

    void displayScore()
    {
        cout<<"------------RESULTS------------------"<<endl;

        cout << "Name: " << Name << endl;
        cout << "Score: " << Score << " /4 " << endl;
    }
};

int main()
{
    quiz B;

    B.Startquiz();
    B.displayData();
    B.question1();
    B.question2();
    B.question3();
    B.question4();
    B.displayScore();

    return 0;
}