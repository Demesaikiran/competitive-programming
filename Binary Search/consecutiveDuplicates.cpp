string solve(string s) {
    auto last = std::unique(s.begin(), s.end());
    s.erase(last, s.end());
    return s;
}

/*

std::unique is used to remove duplicates of any element present consecutively in a range[first, last). It performs this task for all the sub-groups present in the range having the same element present consecutively.

It does not delete all the duplicate elements, but it removes duplicacy by just replacing those elements by the next element present in the sequence which is not duplicate to the current element being replaced. All the elements which are replaced are left in an unspecified state.
Another interesting feature of this function is that it does not changes the size of the container after deleting the elements, it just returns a pointer pointing to the new end of the container, and based upon that we have to resize the container, or remove the garbage elements.