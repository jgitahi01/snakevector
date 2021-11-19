#define SNAKEH
#include <string>
using namespace std;
class Snake
{
        private:
                string snakeName;
                string snakeBreed;
                float snakeWeight;
                string snakeGender;
                double snakeLength;
                string snakeFood;
                string snakeColor;
                string snakeComments;
        public:
                Snake();
                void SetName(string name);
                void SetBreed(string breed);
                void SetWeight(float weight);
                void SetGender(string gender);
                void SetLenght(double length);
                void SetFood(string food);
                void SetColor(string color);
                void SetComments(string comments);
                string GetName();
                string GetBreed();
                float GetWeight();
                string GetGender();
                double GetLenght();
                string GetFood();
                string GetColor();
                string GetComments();
};