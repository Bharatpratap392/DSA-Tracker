#include <bits/stdc++.h>
using namespace std;

void learningPAIR()
{
    pair<int, int> p1 = {1, 2};                                                        // for only insterting 2 values
    cout << "Printing-Pair p1 =" << " " << p1.second << " " << p1.first << endl;       // here p.second access the value "2" and p.first acccess "1"
    pair<int, pair<int, int>> q2 = {4, {5, 8}};                                        // now for insterting 3,4,5.... values we can use nested pair here one pair can store 2 pair
    cout << "Printing-Pair q2 =" << " " << q2.first << " " << q2.second.first << endl; // here we access pair 1 value which is "4" and then we can access pair 2 value which we can access any 5 or 8
    pair<int, int> arr1[] = {{1, 5}, {5, 3}, {8, 9}, {8, 4}, {7, 3}};                  // when we have more pair that's how we can store it
    cout << "Printing-Pair arr1 =" << " " << arr1[1].first << endl;                    // and that's how we access the value
}
void learningVECTOR() // we are using vector b/c now let's say i have to put 6th pair but i can't do it with arrays b/c they are fixed in size and vector are dynamically in size
{
    vector<int> v1;                                                         // creates empty container
    v1.push_back(1);                                                        // in empty container it store value {1}
    v1.emplace_back(2);                                                     // and then it pushes another value in that container now it's like {1,2}
    cout << "Printing-Vector v1 =" << " " << v1[0] << " " << v1[1] << endl; // here v1[0] gives the first element, v1[1] gives the second.
    vector<pair<int, int>> v2;                                              // want to store values in pair
    v2.push_back({1, 3});                                                   // here in push_back we have to put the values in this format ({1,3})>>bracket>>curly bracket
    v2.emplace_back(3, 4);                                                  // here if we can use curly bracket or not it still stores the value
    cout << "Printing-Vector v2  =" << " " << v2[0].first << " " << v2[1].second << endl;
    vector<int> v3(5, 100);                                 // it means first value is number of times print and second value is which get's printed here 100 100 100 100 100
    cout << "Printing-Vector v3 =" << " " << v3[0] << endl; // only print first value
    cout << "Value after erase of v3= ";
    for (int i = 0; i < v3.size(); i++)
    {                  // i want to print "Value after erase of v8= " once before the loop
        cout << v3[i]; // i want use a loop to print each element
        if (i != v3.size() - 1)
        {
            cout << ","; // After each element except the last one, i want print a comma ,
        }
    }
    cout << endl;                                                           // This ensures the next output starts on a new line
    vector<int> v4(5);                                                      // it means it have no values/"0" and copy 5 times(0,0,0,0,0)
    cout << "Printing-Vector v4 =" << " " << v4[0] << endl;                 // just printing
    vector<int> v5(2, 6);                                                   // it means 6 6,two times 6
    cout << "Printing-Vector v5 =" << " " << v5[0] << " " << v5[1] << endl; // prints 6(at 0 position),6(at 1 position)
    vector<int> v6(v5);                                                     // copy the values from v5
    cout << "Printing-Vector v6 =" << " " << v6[1] << " " << v6[0] << endl; // copy the values from v5 so //prints 6(at 0 position),6(at 2 position)
}
void learningITERATOR()
{                                                          // iterator is a tool to access the value that is stored in any container
    vector<int> v7 = {1, 5, 10, 86, 95};                   // putting values
    vector<int>::iterator it_begin = v7.begin();           // gived name it_begin(just name) it prints the first element of the v7 which is 1
    vector<int>::iterator it_end = v7.end();               // gived name it_end(just name) it prints the last element of the v7 which is 95
    vector<int>::reverse_iterator it_rend = v7.rend();     // gived name it_rend(just name) it prints the first element in reverse order of the v7 which is 1
    vector<int>::reverse_iterator it_rbegin = v7.rbegin(); // gived name it_rbegin(just name) it prints the last element in reverse order of the v7 which is 95
    cout << "printingIterator begin =" << " " << *(it_begin) << " " << endl;
    cout << "printingIterator end =" << " " << *(it_end - 1) << " " << endl; // we used (it_end-1) we used -1 b/c if we not use it it prints the past element which is 86 what we want 95
    cout << "printingIterator rbegin =" << " " << *(it_rbegin) << " " << endl;
    cout << "printingIterator rend =" << " " << *(it_rend - 1) << " " << endl;               // we used (it_rend-1) we used -1 b/c if we not use it it prints the second element which is 5 what we want 1
    cout << "printingIterator selected values =" << " " << v7[0] << " " << v7.at(2) << endl; // v7[0] means the at index 0 the value is  1 is going to print and v7.at(2) which means at index 2 value is 10 is going to print
    cout << "printingIterator back =" << " " << v7.back() << " " << endl;                    // it just simply prints the last values of the v7 here it is 95
    for (vector<int>::iterator it = v7.begin(); it != v7.end(); it++)                        // one way of printing all the values
    {
        cout << "Printing in headache way v7 =" << " " << *(it) << " " << endl; // to print all values just use *(name of the function here is "it")
    }
    for (auto it = v7.begin(); it != v7.end(); it++)
    { // good to use without using this "vector<int>::iterator" headache ,and by writing auto it automactically assign the iterator
        cout << "Printing in good way v7 =" << " " << *(it) << " " << endl;
    }
    for (auto it : v7)
    { // just write auto it:use this ":"not this "="v7
        cout << "Printing in cool way v7 =" << " " << it << endl;
    }
}

// Function to demonstrate vector erase values
void learningERASEFFUNCTION()
{
    vector<int> v8 = {65, 48, 35, 18, 81};
    v8.erase(v8.begin() + 1); // Removes the second element (48) and output 65,35,18,31
    // Print the vector after erasing only single element
    cout << "Value after erase of v8= " << v8[0] << endl;
    cout << "Value after erase of v8= ";
    for (int i = 0; i < v8.size(); i++)
    {                  // i want to print "Value after erase of v8= " once before the loop
        cout << v8[i]; // i want use a loop to print each element
        if (i != v8.size() - 1)
        {
            cout << ","; // After each element except the last one, i want print a comma ,
        }
    }
    cout << endl;

    vector<int> v9 = {65, 48, 35, 18, 81};
    v9.erase(v9.begin() + 1, v9.begin() + 3); // Removes the first element 48 Removes the third element 35
    cout << "Value after erase of v9= ";
    for (int i = 0; i < v9.size(); i++)
    {                  // i want to print "Value after erase of v9
        cout << v9[i]; // i want use a loop to print each element
        if (i != v9.size() - 1)
        {
            cout << ","; // After each element except the last one, i want print a comma ,
        }
    }
    cout << endl;
}

// Function to demonstrate vector insert single values
void learningINSERTFUNCTION()
{
    vector<int> v10(2, 10); // it prints 10 10 ,2 times 10
    cout << "Value after erase of v10= ";
    for (int i = 0; i < v10.size(); i++)
    {
        cout << v10[i];
        if (i != v10.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
    // single element inserting
    vector<int> v11(2, 10);      // it prints 10 10 ,2 times 10
    v11.insert(v11.begin(), 30); // now {30,10,10} so here we don't decided the postion it automatically assign the first place
    cout << "Value after erase of v11= ";
    for (int i = 0; i < v11.size(); i++)
    {
        cout << v11[i];
        if (i != v11.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    vector<int> v12(2, 10);             // it prints 10 10 ,2 times 10
    v12.insert(v12.begin() + 1, 2, 40); // now {10,40,40,10} so here +1,2 means postion where we have to insert values and then values which is here 40
    cout << "Value after erase of v12= ";
    for (int i = 0; i < v12.size(); i++)
    {
        cout << v12[i];
        if (i != v12.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
    // hardly required just know
    vector<int> copy(2, 30);                                         // it prints 30 30 ,2 times 30
    v12.insert(v12.begin(), copy.begin(), copy.end());               // it prints {30,30,10,40,40,10} size 6
    cout << "size of copy container =" << " " << v12.size() << endl; // it gives you the size of element present in here after copy and v12 total is 6
    cout << "Value after erase of copy= ";
    for (int i = 0; i < v12.size(); i++) // same content from v12
    {
        cout << v12[i];
        if (i != v12.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    vector<int> v13 = {10, 30, 40};
    v13.pop_back(); // it automatically removes last elememnt here it is 40 and print{10,30}
    cout << "pop back only last value =";
    for (int i = 0; i < v13.size(); i++)
    {
        cout << v13[i];
        if (i != v13.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
}
void learningSWAPnumbers()
{
    // swap vectors
    vector<int> v14 = {10, 20};
    vector<int> v15 = {12, 17};
    v14.swap(v15); // swaps the entire content of v14 to v15 and then v14={12,17}
    cout << "AFTER SWAP v14 =";
    for (int i = 0; i < v14.size(); i++)
    {
        cout << v14[i];
        if (i != v14.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;

    cout << "AFTER SWAP v15 ="; // swaps the entire content of v15 to v14 and then v15={10,20}
    for (int i = 0; i < v15.size(); i++)
    {
        cout << v15[i];
        if (i != v15.size() - 1)
        {
            cout << ",";
        }
    }
    cout << endl;
}

// clear whole vector
void learningclear()
{
    vector<int> v16 = {1, 2, 3, 5, 6, 8};
    v16.clear();
    cout << "AFTER clear v16 =" << " "; // clear all the element present in v16
    if (v16.empty())
    {
        cout << "vector is empty"; // how we know is vector really is empty so we use it we can remove all "if condition" then we get "AFTER clear v16="
    }
    else
    {
        for (int i = 0; i < v16.size(); i++)
        {
            cout << v16[i];
            if (i != v16.size() - 1)
            {
                cout << ",";
            }
        }
    }
    cout << endl;
}

// learning list
void learninglist()
{
    // push-back for just pushing value
    list<int> ls1;
    ls1.push_back(2); // insert value in ls1
    cout << "value of ls1 =" << " ";
    for (auto it = ls1.begin(); it != ls1.end(); ++it)
    {
        cout << *it;
        if (next(it) != ls1.end())
        {
            cout << ",";
        }
        cout << endl;

        /*
        now similarly there are few more syntax
        emplace_back(4)--just put the value at the back {2,4}
        push_front(5)--just put the value in front {5,2,4}
        emplace_front(6)--just put the value at front {6,5,2,4}
        and rest function are same as vector
        begin,end,rbegin,rend,clear,insert,size,swap,empty
        */

        /*
        similarly there is "deque"
        deque<int>dq;
        same it also like list and also all the syntax are same here
        */
    }
}
void learningStack()
{
    stack<int> st;                                        // here LIFO works last in first out
    st.push(1);                                           //{1}
    st.push(2);                                           //{2,1} just push the value at front
    st.push(3);                                           //{3,2,1}
    st.push(4);                                           //{4,3,2,1}
    st.emplace(5);                                        //{5,4,3,2,1}
    st.pop();                                             // pops only 5 st looks like now {4,3,2,1}
    cout << "stack top =" << " " << st.top() << endl;     // 4
    cout << "stack size =" << " " << st.size() << endl;   // which is also 4 after poping 5
    cout << "stack empty =" << " " << st.empty() << endl; // empty the whole string
    stack<int> st1, st2;
    st1.swap(st2); // just for swap
}
// queue
void learningqueue() // here FIFO fist in first out
{
    queue<int> q;
    q.push(1);                                         //{1}
    q.push(2);                                         //{1,2}
    q.emplace(4);                                      //{1,2,4}
    q.back() += 5;                                     // just add to the last number in the container
    cout << "queue back =" << " " << q.back() << endl; // prints 9
    // now the q is {1,2,9}
    cout << "queue front =" << " " << q.front() << endl; // prints 1
    q.pop();                                             // pop first element {2,9}
    cout << "queue front =" << " " << q.front() << endl; // prints 2
    // size swap empty same as stack
}

void learningPQ()
{ // PQ means priority
    // maximum heap largest value first
    priority_queue<int> pq1;
    pq1.push(5);     //{5}
    pq1.push(2);     //{5,2}
    pq1.push(8);     //{8,5,2}
    pq1.emplace(10); //{10,8,5,2}

    cout << "print pq1 =" << pq1.top() << endl; // prints 10
    pq1.pop();                                  // pops 10 and remaining {8,5,2}
    cout << "print pq1 =" << pq1.top() << endl; // prints 8

    // size swap empty function same as others

    // minimum heap smaller value first
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(8);                                //{8}
    pq2.push(5);                                //{5,8}
    pq2.push(10);                               //{5,8,10}
    pq2.emplace(15);                            //{5,8,10,15}
    cout << "print pq2 =" << pq2.top() << endl; // prints 5
}

void learningSET()
{ // set means it stores everything in sorted way and unique way
    // begin,end,rbegin,rend,size,empty and swap are same as those of above
    // A set stores elements in sorted and unique manner.
    set<int> st;
    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2} duplicate, will not be added
    st.insert(3);  // {1,2,3}
    st.insert(4);  // {1,2,3,4}
    st.insert(5);  // {1,2,3,4,5}

    // Find and erase 5
    auto it = st.find(5);
    if (it != st.end())
        st.erase(it); // Now: {1,2,3,4}

    // Find and erase 3
    it = st.find(3);
    if (it != st.end())
        st.erase(it); // Now: {1,2,4}

    // Erase range: from 2 (included) to 4 (excluded)
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // Now: {1,4}

    // Display set
    for (auto val : st)
    {
        cout << val << " ";
    }
    cout << endl;

    // lower_bound() and upper_bound() examples:
    st.insert(10);
    st.insert(20);
    st.insert(30); // Now: {1,4,10,20,30}

    auto lb = st.lower_bound(15); // points to 20
    auto ub = st.upper_bound(20); // points to 30

    if (lb != st.end())
        cout << "Lower Bound of 15: " << *lb << endl;
    if (ub != st.end())
        cout << "Upper Bound of 20: " << *ub << endl;
}

// learing MultiSet
void learningMultiSet()
{
    // everything is like set
    // just it stores duplicates elements also
    multiset<int> ms;
    ms.insert(1);          //{1}
    ms.insert(1);          //{1,1}
    ms.insert(2);          //{1,1,2}
    ms.erase(1);           // all 1's erased then {2}
    int cnt = ms.count(1); // it counts all the number of 1's present
    // only a single element erased
    ms.erase(ms.find(1)); // it erases only first 1 here it postion is also first
    // ms.erase(ms.find(1), ms.find(1) + 2); to delete more than 1
    // rest are all same as set
}
// learning unordered set
void learningSet()
{
    unordered_set<int> st;
    // lower_bound and upper_bound function does not works
    // rest all are function are same
    // as above,it does not stores in any particular order/not store in sorted way it has a better complexity
    // than set in most cases,except some when collision happens
}
// learning map
void learningMap()
{
    // A map is a container that stores key-value pairs, where:
    // Each key is unique.
    // Every key maps to one value.
    // It stores data in sorted order
    map<int, int> mpp; // here first int stores key and other int stores the values of that key
    // map<int, pair<int, int>> mpp;  now here also same first int key and other two int pair are two values
    // map<pair<int, int>, int> mpp;  two values and one key

    mpp[1] = 2;         // stores {1, 2}
    mpp.emplace(3, 1);  // stores {3, 1}
    mpp.insert({2, 4}); // stores {2, 4}
    mpp[2 + 3] = 10;    // (2,3) in your code was incorrect — this makes it valid by using key = 5
    // Print map
    for (auto it : mpp)
    {
        cout << "MAP" << "{" << it.first << "," << it.second << "}" << endl;
    }
    // erase,swap,size,empty,are sae as above
}

void explainMultimap();
// everything same aa map,only it can store multiple keys
// only mpp[key] cannot be used here

void explainUnorderedmap();
// same as set and unordered_set difference

void learningExtra()
{
    // 1. Sorting an integer array
    int arr[] = {1, 2, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Basic sorting (ascending) sorts all elements
    sort(arr, arr + n);

    // Sort in descending order
    sort(arr, arr + n, greater<int>());

    // Selective sorting (sort only elements from index 2 to 3) or just 5,3
    sort(arr + 2, arr + 4);

    // 2. Sorting array of pairs
    pair<int, int> pairs[] = {{1, 2}, {2, 3}, {9, 2}};
    //sort it according to second element
    //if second element is same,then sort
    //if according to first element but in descending 
    int pairs_size = sizeof(pairs) / sizeof(pairs[0]);
    sort(pairs, pairs + pairs_size);

    // 3. Sorting a vector
    vector<int> v = {5, 2, 4, 1};
    sort(v.begin(), v.end());

    // Print results
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nSorted vector: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    learningPAIR();
    learningVECTOR();
    learningITERATOR();
    learningERASEFFUNCTION();
    learningINSERTFUNCTION();
    learningSWAPnumbers();
    learningclear();
    learninglist();
    learningStack();
    learningqueue();
    learningPQ();
    learningMap();
    learningExtra();
    return 0;
}