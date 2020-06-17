// Author: Jesus Carlos Martinez Gonzalez
// Date: 11/06/2020
// Solution to: https://www.hackerrank.com/challenges/strange-advertising/problem
// Language: C++
// Problem to solve: HackerLand Enterprise is adopting a new viral advertising strategy... 
// ... When they launch a new product, they advertise it to exactly 5 people on social media...
// ... On the first day, half of those 5 people (i.e., floor(5/2) = 2) like the advertisement and each shares it with 3 of their friends... 
// ... At the beginning of the second day, floor(5/2) * 3 = 2 * 3 = 6 people receive the advertisement...
// ... Each day, floor(recipients/2) of the recipients like the advertisement and will share it with 3 friends on the following day... 
// ... Assuming nobody receives the advertisement twice, determine how many people have liked the ad by the end of a given day, beginning with launch day as day 1...
// ... For example, assume you want to know how many have liked the ad by the end of the 5th day.

// Logic: Go from 1 to n multiplying liked * 3 (except for when day == 1), assign liked to be shared / 2 and add liked to tot, then return tot.
int viralAdvertising(int n) {
    int shared = 5, liked = 0, tot = 0;
    for (int day = 1; day <= n; day++){
        if (day > 1) shared = liked * 3;
        liked = shared / 2;
        tot += liked;
    }
    return tot;
}