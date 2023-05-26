 #include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int N; // number of trees
    cout << "Enter the number of trees: ";
    cin >> N;
    
    double sum = 0; // sum of heights
    double heights[N]; // array to store heights
    
    // get heights and calculate sum
    for(int i=0; i<N; i++)
    {
        cout << "Enter the height of tree  " << i+1 << ": ";
        cin >> heights[i];
        sum += heights[i];
    }
    
    double mean = sum / N; // calculate mean
    
    // calculate standard deviation and variance
    double std_dev = 0;
    double variance = 0;
    for(int i=0; i<N; i++)
    {
        std_dev += pow(heights[i] - mean, 2);
        variance += pow(heights[i] - mean, 2) / N;
    }
    std_dev = sqrt(std_dev / N);
    
    // find shortest and tallest tree
    double shortest = heights[0];
    double tallest = heights[0];
    for(int i=1; i<N; i++)
    {
        if(heights[i] < shortest)
        {
            shortest = heights[i];
        }
        if(heights[i] > tallest)
        {
            tallest = heights[i];
        }
    }
    
    // display results
    cout << "Mean height: " << mean << endl;
    cout << "Shortest tree height: " << shortest << endl;
    cout << "Tallest tree height: " << tallest << endl;
    cout << "Standard deviation: " << std_dev << endl;
    cout << "Variance: " << variance << endl;
    
    return 0;
}

