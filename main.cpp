#include <iostream>

using namespace std;

int calculateVideos(int deadlineDays, int averageVideoTime) {
    int deadlineMinutes = deadlineDays * 60;
    
    return deadlineMinutes / averageVideoTime;
}


int main()
{
    int avgVideoTime;
    int deadlineDays;

    cout << "Enter how many hours until your deadline: ";
    cin >> deadlineDays;
    cout << endl;

    cout << "Enter average video time and the amount of time it takes you to complete a lesson (1 = 1min): ";
    cin >> avgVideoTime;
    cout << endl;

    int videos = calculateVideos(deadlineDays, avgVideoTime);
    std::cout << "You can do " << videos << " steps before the deadline.\n";
    system("pause");
    return 0;
}