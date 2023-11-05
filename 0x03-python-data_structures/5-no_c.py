#!/usr/bin/python3
def no_c(my_string):
    if my_string == None:
        return None
    new = []
    for ch in my_string:
        if ch != 'c' and ch != 'C':
            new.append(ch)
    return("".join(new))
