/**
 * Calculates the total number of peas given the number of pea pods,
 * and the number of peas per pod.
 **/

#include <iostream>

using namespace std;

int main()
{
    int numberOfPods, peasPerPod, totalPeas;
    // Get input
    cout << "Press return after entering a number.\n";
    cout << "Enter the number of pods:\n";
    cin >> numberOfPods;
    cout << "Enter the number of peas in a pod:\n";
    cin >> peasPerPod;
    // Calculate answer
    totalPeas = numberOfPods * peasPerPod;
    // Output answer
    cout << "if you have " << numberOfPods << " pea pods\n";
    cout << "and " << peasPerPod << " peas in each pod, then\n";
    cout << "you have " << totalPeas << " peas in all the pods.\n";
    return 0;
}
