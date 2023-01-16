/*
হ্যালো প্রোগ্রামারস!!
চলে এসেছে Basic Data Structures and Problem solving part - 2 এর আরেকটি conceptual  session
আজকে basically Tree recursion,Divide and Conquer Strategy, Merge sort এইসব নিয়ে আলোচনা করা হবে.
Merge sort টা অনেক important একটা algorithm. এই  algorithm টার recursive call গুলো কোন strategy তে হয়,কোন কল টা আগে হয় আর কোন টা পরে,
nested call টা কিভাবে হয়, এইসব ব্যাপারে যাতে কোনো ধরনের সমস্যা না থাকে কারো,তাই পুরো ব্যাপারটা simulate  করে দেখানা হবে।একটা approach ভালো মতো আয়ত্ত হয়ে গেলে divide conquer strategy টা খুব ভালোভাবে আপনারা apply করতে পারবেন।
তো ভয় পাওয়ার কিছুই নেই,আজকে এই রিলেটেড সবকিছু crystal clear হয়ে যাবে।
এইসব ব্যাপারগুলো যদি মিস করতে না চান তাহলে আজকের সেশনে অবশ্যই জয়েন করবেন।
আরেকটি announcement হচ্ছে time complexity and space complexity নিয়ে চিন্তার কিছু নেই,৩-৪ দিনের মধ্যেই এই রিলেটেড separate একটা recorded ভিডিও আসবে,
যেটাতে আরো easy and efficient way তে complexity analysis দেখানো হবে।
So, Happy Coding.

Summary -
1) Tree recursion
2) Merge sort and It's simulation
3) Problem solving by using merge sort
Time : 9 January, 2023, 10:00 PM

Zoom Link-
https://us06web.zoom.us/j/9709208002...
Meeting ID: 970 920 8002
Passcode: hUsLW6

author: Md.Al-Amin Hossian.
created: 2023-01-09 22:12:56

*/

#include<bits/stdc++.h>

using namespace std;

void fun(int n)
{
    if(n > 0)
    {
        // 3 step
        // print kora
        cout << n << '\n';

        // call kora
        fun(n-1);

        // call kora
        fun(n-1);
        /*
        3
        2
        1
        1
        2
        1
        1
        */
    }

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    fun(3);

    return 0;
}
