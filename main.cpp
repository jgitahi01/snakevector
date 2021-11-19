#include <iostream>
#include <vector>
using namespace std;
#include "snake.h"
#include <string>
int main()
{
    // declare a vector of Snake tyope
    vector<Snake> snakes;
    int n; // for number of snakes
    // get the input for number of snakes
    cout << "Enter the number of snakes: ";
    cin >> n;
    // iterate the loop n times
    for (int i = 0; i < n; i++)
    {
        // declare a Snake object
        Snake snake;
        // declare some variables to get input
        string breed;
        float weight;
        string name;
        string gender;
        double length;
        string food;
        string color;
        string comments;
        //snake no. (i+1)
        cout << "snake" << (i + 1) << endl;
        // get the name for snake (i+1)
        cout << "Enter the snake name:\n";
        cin >> name;
        // get the breed for snake (i+1)
        cout << "Enter the snake breed:\n";
        cin >> breed;
        // get the weight for snake (i+1)
        cout << "Enter the snake weight:\n";
        cin >> weight;
        // get the gender for snake (i+1)
        cout << "Enter the snake gender:\n";
        cin >> gender;
        // get the length for snake (i+1)
        cout << "Enter the snake length:\n";
        cin >> length;
        // get the favourite food for snake (i+1)
        cout << "Enter the snake favorite food:\n";
        cin >> food;
        // get the color for snake (i+1)
        cout << "Enter the snake color:\n";
        cin >> color;
        // clear the memory buffer
        fflush(stdin);
        // get the additional comments about snakes
        cout << "Enter additional comments about the snake:\n";
        // change cin to getline to allow spaces in comment
        getline(cin, comments);
        // clear the memory buffer again
        fflush(stdin);
        snake.SetName(name);         // set the name of snake
        snake.SetBreed(breed);       // set the breed of snake
        snake.SetWeight(weight);     // set the weight of snake
        snake.SetGender(gender);     // set the gender of snake
        snake.SetLenght(length);     // set the length of snake
        snake.SetFood(food);         // set the favourite food of snake
        snake.SetColor(color);       // set the color of snake
        snake.SetComments(comments); // set the additional comments about snake
        // add this snake objcet to snakes vector
        snakes.push_back(snake);
    }
    // now it's time to display all information about snake
    cout << "\nSnake Information" << endl;
    // traverse the vector
    for (int i = 0; i < n; i++)
    {
        // display information about (i+1)'th snake
        cout << snakes[i].GetName() << " " << snakes[i].GetBreed() << " " << snakes[i].GetWeight() << " "
             << snakes[i].GetGender() << " " << snakes[i].GetLenght() << " " << snakes[i].GetFood() << " "
             << snakes[i].GetColor() << " " << snakes[i].GetComments() << endl;
    }
    return 0;
}