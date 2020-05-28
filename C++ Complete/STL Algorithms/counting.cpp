// Algorithm Purpose
// adjacent_find Searches for adjacent matching elements within a
// sequence and returns an iterator to the first match.
// binary_search Performs a binary search on an ordered sequence.
// copy Copies a sequence.
// copy_backward Same as copy( ) except that it moves the elements from
// the end of the sequence first.
// count Returns the number of elements in the sequence.
// count_if Returns the number of elements in the sequence that
// satisfy some predicate.
// equal Determines if two ranges are the same.
// equal_range Returns a range in which an element can be inserted
// into a sequence without disrupting the ordering of
// the sequence.
// fill and fill_n Fills a range with the specified value.
// find Searches a range for a value and returns an iterator to
// the first occurrence of the element.
// find_end Searches a range for a subsequence. It returns an iterator
// to the end of the subsequence within the range.
// find_first_of Finds the first element within a sequence that matches
// an element within a range.
// find_if Searches a range for an element for which a user-defined
// unary predicate returns true.
// for_each Applies a function to a range of elements.
// generate and generate_n Assign elements in a range the values returned by
// a generator function.
// includes Determines if one sequence includes all of the elements
// in another sequence.
// inplace_merge Merges a range with another range. Both ranges must be
// sorted in increasing order. The resulting sequence is sorted.
// iter_swap Exchanges the values pointed to by its two iterator
// arguments.
// lexicographical_compare Alphabetically compares one sequence with another

#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
using namespace std;

bool isPrime(int n)
{
        if(n<=1) return false;
        if(n<=3) return true;

        if(n%2==0||n%3==0) return false;

        for(int i=5; i*i<=n; i=i+6)
                if(n%i==0||n%(i+2)==0) return false;
        return true;
}


int main()
{
        vector<bool> v;
        unsigned int i;
        int noOfPrimes=100;
        for(i=0; i<noOfPrimes; i++)
        {
                if(isPrime(i)) v.push_back(true);
                else v.push_back(false);
        }
        std::vector<bool>::iterator p=v.begin();
        for(i=0; i<noOfPrimes; i++)
        {
                cout<<i<<" "<<v[i]<<endl;

        }

        cout<<"The no of primes:"<<count(v.begin(),v.end(),true);


        return 0;
}
