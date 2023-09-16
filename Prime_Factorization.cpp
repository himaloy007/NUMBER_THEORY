#include <bits/stdc++.h>

using namespace std;

vector<int> primefact(int n) // ভেক্টর ফাংশন ডিক্লেয়ার
{
    vector<int> factors; // ভেক্টর ভেরিয়েবল ডিক্লেয়ার

    while (n % 2 == 0) // যতক্ষণ পর্যন্ত n কে 2 দ্বারা ভাগ যাওয়া পসিবল,ততক্ষণ ভাগ করতে থাকবো,
                       // আর  2 কে ভেক্টরে পুশ করতে থাকবো
    {
        factors.push_back(2);
        n /= 2;
    }

    /*যেহেতু ২ দ্বারা বিভাজ্য যতক্ষণ পসিবল ততক্ষণ ভাগ করা হয়ে যায় প্রথম লুপেই(i=2),তাই ৪,৬,৮...জোড় সংখ্যা এসব দ্বারা কখনোই পরবর্তীতে
    n বিভাজ্য হবে না,তাই আমরা লুপ চালানোর সময় i=i+2(skipping even tricks) দিয়ে আইটারেট করবো*/

    for (int i = 3; i * i <= n; i++)
    {
        while (n % i == 0) // যতক্ষণ পর্যন্ত n কে i  দ্বারা ভাগ যাওয়া পসিবল,ততক্ষণ ভাগ করতে থাকবো,
                           // আর  i কে ভেক্টরে পুশ করতে থাকবো
        {
            factors.push_back(i);
            n /= i;
        }
    }

    if (n > 1) /*অবশিষ্ট n কে আমরা ভেক্টরে পুশ করে দিবো যদি তা ১ এর থেকে বড় হয়*/
    {
        factors.push_back(n);
    }
    return factors; // ভেকটর রিটার্ণ করবে
}

int main()
{
    int num;

    cin >> num;

    // vector<int>prime_factors;//অটোর বদলে এটা ইউজ
    auto prime_factors = primefact(num); // মেইন ফাংশনে অটোমেটিকালি ভেক্টর আইডেন্টিফাই করে পুর্বের ভেক্টর ফাংশনের রিটার্ণকৃত মান নিয়ে আসা

    for (int factor : prime_factors) //(Auto/INT)
    {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
