def smallest(lst):
    size=len(lst)
    min=lst[0]
    for i in lst :
        if (min>i):
            min=i
    return min
def main():
    lst=[5,15,22,1,-15,24]
    
    print("smallest element in list is ",smallest(lst))
if __name__=="__main__":
    main()
    