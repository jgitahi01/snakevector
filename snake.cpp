#include<iostream> 
using namespace std;
#include "snake.h"
Snake::Snake()
{
    snakeName = "none";
    snakeBreed = "none";
    snakeWeight = 0.0;
    snakeGender = "none";
    snakeLength = 0.0;
    snakeFood = "none";
    snakeColor = "none";
    snakeComments = "none";
}
void Snake::SetName(string name)
{
    snakeName = name;
}
void Snake::SetBreed(string breed)
{
    snakeBreed = breed;
}
void Snake::SetWeight(float weight)
{
    snakeWeight = weight;
}
void Snake::SetGender(string gender)
{
    snakeGender = gender;
}
void Snake::SetLenght(double length)
{
    snakeLength = length;
}
void Snake::SetFood(string food)
{
    snakeFood = food;
}
void Snake::SetColor(string color)
{
    snakeColor = color;
}
void Snake::SetComments(string comments)
{
    snakeComments = comments;
}
//return statements
string Snake::GetName()
{
    return snakeName;
}
string Snake::GetBreed()
{
    return snakeBreed;
}
float Snake::GetWeight()
{
    return snakeWeight;
}
string Snake::GetGender()
{
    return snakeGender;
}
double Snake::GetLenght()
{
    return snakeLength;
}
string Snake::GetFood()
{
    return snakeFood;
}
string Snake::GetColor()
{
    return snakeColor;
}
string Snake::GetComments()
{
    return snakeComments;
}