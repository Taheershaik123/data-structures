import sys
list_year =[]
list_name =[]
list_medal=[]
def adding():
    year = int(input("enter the year : "))
    name = input("Enter the name of the player : ")
    medal =input("Enter the medal : " )
    if year >=0 and len(name) >=0 and len(medal)>=0:
         list_year.append(year)
         list_name.append(name)
         list_medal.append(medal)
         print("Added sucessfully")
    else:
         print("add the data first ")
         adding()
    menu()
def deleting():
    try:
      n = input("Enter the year you want to delete ")
      if list_year.index(n) != False:
       list_year.remove(list_year[list_year.index(n)])
       list_name.remove(list_name[list_year.index(n)])
       list_medal.remove(list_medal[list_year.index(n)])
    except ValueError:
        print("data not found in the record :")
    menu()
def display_particular_year():
    try:
        n = input("Enter the year you want to display the record : ")
        print(list_year[list_year.index(n)],list_name[list_year.index(n)],list_medal[list_year.index(n)])
    except ValueError:
        print(" data not found ")
    menu()
        
def display_all_details():
    print(list_year)
    print(list_name)
    print(list_medal)
    menu()
def Exit():
    print("____________bye_______________")
    sys.exit()
def menu():
    print("1.add\n2.delete particular record\n3.dislay_particular_record\n4.display all records\n5.exit")
    n=int(input("enter the choice : "))
    if n==1:
        adding()
    elif n==2:
        deleting()
    elif n==3:
        display_particular_year()
    elif n==4:
        display_all_details()
    elif n==5:
        Exit()
    else:
        print("please enter the valid choice : ")
        menu()
if __name__ == "__main__":
    menu()
