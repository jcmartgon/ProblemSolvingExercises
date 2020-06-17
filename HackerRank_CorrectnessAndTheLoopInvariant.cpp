// Author: Jesus Carlos Martinez Gonzalez
// Date: 11/06/2020
// Solution to: https://www.hackerrank.com/challenges/correctness-invariant/problem
// Language: C++
// Problem to solve: In computer science, you could prove it formally with a loop invariant, where you state that a desired property is maintained in your loop... 
// ... Such a proof is broken down into the following parts:
//         Initialization: It is true (in a limited sense) before the loop runs.
//         Maintenance: If it's true before an iteration of a loop, it remains true before the next iteration.
//         Termination: It will terminate in a useful way once it is finished.

// Logic: Iterate over each element of the array arr until a value on the i position is found to be smaller than that on the j position and swap them until...
// ... the value on the j position is smaller than that one on the i position
void insertionSort(int N, int arr[]) {
    int i,j;
    int value;
    for(i=1;i<N;i++) {
        value=arr[i];
        j=i-1;
        while(j>=0 && value<arr[j]) {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=value;
    }
    for(j=0;j<N;j++) {
        printf("%d",arr[j]);
        printf(" ");
    }
}