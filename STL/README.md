# C++ STL

The C++ Standard Template Library (STL) is a collection of template classes and functions that provide a variety of commonly used data structures and algorithms. 

STL includes 
- Containers (Store objects and data, simply container classes)
    1. vector
    2. list
    3. forward_list
    4. queue
    5. priority_queue
    6. stack
    7. set
    8. multiset
    9. map
    10. multimap
    11. unordered_set 
- Iterators (used to traverse the elements of a container)
- Algorithms 
    1. sort()
    2. binary_search() and many more

- Function Objects (also called `functors`, used to customize the behavior of algorithms).

---

Before diving into this, let's understand a bit about the `pair`

```c++
#include<iostream>
using namespace std;

int main(){

    pair<int, int> p1 = { 2, 3 };
    pair<int, char> p2 = make_pair(2, 'a');

    cout<<"pair p1 : "<<p1.first<<" "<<p1.second<<endl;
    cout<<"pair p2 : "<<p2.first<<" "<<p2.second<<endl;

    // or your can make pair of pair
    pair<int, pair<int, char>> p3 = { 1, {2, 'a'}};
    cout<<"pair p3 : "<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;

    return 0;
}
```

## Containers

### 1. **Vector**:

- Vector is a dynamic array container in the C++ Standard Template Library (STL). 
- It is a template class that allows you to store a collection of elements with the ability to resize itself automatically as elements are added or removed.

**Declaring a vector**
```
vector< Type_of_element > vector_name;

Here, Type_of_element can be any valid C++ data type,
or can be any other container also like Pair, List etc.

```
**Vector Methods**

| Method | Description | Time Complexity(Average) | Time complexity(worst)
| ---     | ---    | ---    | ---
begin() | Returns an iterator pointing to the first element in the vector. | O(1) |O(1)
end() |Returns an iterator pointing to the theoretical element that follows the last element in the vector. |O(1) |O(1)
size() |Returns the number of elements in the vector. | O(1) |O(1)
capacity() | Returns the size of the storage space currently allocated to the vector expressed as number of elements. |O(1) |O(1)
empty() | Returns whether the container is empty. | O(1) |O(1)
push_back() | It push the elements into a vector from the back. |O(1) | O(n)
pop_back() | It is used to pop or remove elements from a vector from the back. |O(1) | O(n)
insert() | It inserts new elements before the element at the specified position. |O(1) | O(n)
erase() | It is used to remove elements from a container from the specified position or range. |O(1) | O(n)
swap() | It is used to swap the contents of one vector with another vector of same type and size. | O(1)| O(1)
clear() | It is used to remove all the elements of the vector container. |O(1) |O(1)
emplace() | It extends the container by inserting new element at position. |O(1) | O(n)
emplace_back() | It is used to insert a new element into the vector container, the new element is added to the end of the vector. |O(1) | O(n)

```c++
// C++ program to illustrate the above functions

#include <iostream> 
#include <vector> 

using namespace std; 

int main() 
{ 
    vector<int> v; 
    
    // Push elements 
    for (int i = 1; i <= 5; i++) 
        v.push_back(i); 

    cout << "Size : " << v.size(); 
    
    // checks if the vector is empty or not 
    if (v.empty() == false) 
        cout << "\nVector is not empty"; 
    else
        cout << "\nVector is empty"; 

    cout << "\nOutput of begin and end: "; 
    for (auto i = v.begin(); i != v.end(); ++i) 
        cout << *i << " "; 
        
    // inserts at the beginning 
    v.emplace(v.begin(), 5); 
    cout << "\nThe first element is: " << v[0]; 
  
    // Inserts 20 at the end 
    v.emplace_back(20); 
    int n = v.size(); 
    cout << "\nThe last element is: " << v[n - 1]; 
  
    // erases the vector 
    v.clear(); 
    cout << "\nVector size after erase(): " << v.size();     

    return 0; 
} 
```
**Output**
```
Size : 5
Vector is not empty
Output of begin and end: 1 2 3 4 5 
The first element is: 5
The last element is: 20
Vector size after erase(): 0
```

