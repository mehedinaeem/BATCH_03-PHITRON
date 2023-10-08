#include <iostream>
#include <queue> // Include the header for priority_queue

using namespace std;

int main()
{
    // Create a priority queue of integers in ascending order
    priority_queue<int,vector<int>, greater<int>> pq;
    //priority_queue<int> pq;

    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;

    // Input loop
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        pq.push(element); // Push the element into the priority queue
    }

    cout << "Elements in priority queue in ascending order:" << endl;

    // Output loop
    while (!pq.empty())
    {
        cout << pq.top() << " "; // Display the top element
        pq.pop(); // Remove the top element
    }

    cout << endl;

    return 0;
}
