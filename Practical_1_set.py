class set:
    s1=[]
    s2=[]
    

    def contains(self,l,key=0):
        if key in l :
            return True
        else:
            return False
        
    
    def add_element(self):
        n = int(input("Enter Number of element in set 1 :"))
        for i in range(0,n):
            self.s1.append(int(input("Enter element :")))

        n = int(input("Enter Number of element in set 2 :"))
        for i in range(0,n):
            self.s2.append(int(input("Enter element :")))


    def remove_element(self,val):
        self.s1.remove(val)

    def size(self):
        count=1
        for i in self.s1:
            count+=1
        return count
    
    def intersection(self,l1,l2):
        l3 = []
        for i in l2:
            if i in l1:
                l3.append(i)
        return l3
    
    def union(self,l1,l2):
        l3= []
        for i in l1:
            if i not in l3:
                l3.append(i)
        for i in l2:
            if i not in l3:
                l3.append(i)
        return l3
    
    def difference(self,l1,l2):
        l3 = []
        for i in l1:
            if i not in l2:
                l3.append(i)
        return l3
    
    def subset(self,l1,l2):
        flag = 0
        for i in l1:
            if i in l2:
                continue
            else:
                flag=1
                break
        if flag==0:
            return True
        else:
            return False
    

s = set()
def menu():
    print("----- MENU --------")
    print("1.Add Element")
    print("2.Delete Element")
    print("3.Contains")
    print("4.size")
    print("5.Intersection")
    print("6.Union")
    print("7.Difference")
    print("8.Subset")
    ch = int(input("Enter your Choice :"))

    match ch:
        case 1 :
            
            s.add_element()

        case 2:
            ele = int(input("Enter element :"))
            s.remove_element(ele)

        case 3:
            ele = int(input("Enter element :"))
            print(s.contains(s.s1,ele))
        
        case 4:
            print("size = " ,s.size())

        case 5:
           print("Intersection = " ,s.intersection(s.s1,s.s2)) 

        case 6:
            print("union = " ,s.union(s.s1,s.s2))

        case 7:
            print("Difference = " ,s.difference(s.s1,s.s2))

        case 8:
            print("Subset =" ,s.subset(s.s1,s.s2))

        case 9:
            exit()


while(True):
    menu()

