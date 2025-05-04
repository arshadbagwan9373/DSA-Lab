class hasht:
    hashtable = []
    m=0
    def __init__(self,n):
        self.m=n
        self.hashtable = [None]*n

    def div_hash(self,key):
        return key%self.m
    
    def insert(self,key,data):
        i = self.div_hash(key)
        if self.hashtable[i]==None:
            self.hashtable[i]=[key,[key,data]]
            print("Data inserted !!!")
        else:
            print("Collision Occured ****")
            print("Handling collision.......")
            self.collision_resolve(key,data)

    def display(self):
        for i in range(0,self.m):
            print(self.hashtable[i])

    def collision_resolve(self,k,d):
        print("1.Linear Probing")
        print("2.Quadratic Probing")
        c = int(input("Select Collision Resolution Technique :"))
        if c==1:
            
            #----linear probing --------
             i = self.div_hash(k)
             while(i!=self.m-1):
                 if self.hashtable[i]!=None:
                     i+=1
                 else:
                     self.hashtable[i]=[k,[k,d]]
                     print("Data Inserted !!! ( Linear Probing )")
                     break
            

        elif c==2:
            #------quadratic probing ------
            ind = self.div_hash(k)
            i=1
            while(i<=self.m-1):
                 if self.hashtable[ind]!=None:
                     ind = (ind + i*i)%self.m
                     i+=1

                 else:
                     self.hashtable[ind]=[k,[k,d]]
                     print("Data Inserted !!!  ( Quadratic probing )")
                     break

            
s = int(input("Enter Hashtable Size :"))
h=hasht(s)
while(True):
    print("1.Add Data")
    print("2.Show table")
    ch= int(input("Enter your choice :"))
    if ch==1:
        tel = int(input("Enter Telephone Number :"))
        name = input("Enter Name :")
        h.insert(tel,name)
    elif ch==2:
        h.display()
