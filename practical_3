class hashtable:
	def __init__(self,m):
		self.m=m
		self.hash_table=[None]*m
		self.hash_table2=[None]*m
		self.element_count=0
		
		
	def h(self,key,m):
		return key%m
		
	def h2(self,key):
		return key%5
		
	def isfull(self):
		if element_count>=m:
			print("Hashtable is Full !!!!!!!!!!")
	
	def linear_prob(self,key,data):
		ind=self.h(key,self.m)
		if self.hash_table[ind]==None:
			self.hash_table[ind]=data
			self.element_count+=1
		else:
			while(self.hash_table[ind]!=None):
				ind+=1
				if self.hash_table[ind]==None:
					self.hash_table[ind]=data
					self.element_count+=1
					break
		print(self.hash_table)
				
	def double_hash(self,key,data):
		ind=self.h(key,self.m)
		i=0
		if self.hash_table2[ind]==None:
			self.hash_table2[ind]=data
			#self.element_count+=1
		else:
			while(i<=self.m):
				ind=(self.h(key,self.m)+i*self.h2(key))%self.m
				if self.hash_table2[ind]==None:
					self.hash_table2[ind]=data
					##self.element_count+=1
					break
				i+=1
		print(self.hash_table2)
		
		
		
	def search_linear(self,key):
		ind=self.h(key,self.m)
		if self.hash_table[ind]!=None:
					
			if self.hash_table[ind][0]==key:
				print("key Found in Hashtable !!!")
			else:
				i=0
				while(i<=self.m):
					ind+=1
					if ind==self.m:
						ind=0
					if self.hash_table[ind][0]==key and self.hash_table[ind]!=None:
						print("key Found !!!")
						break
					
					i+=1
		else:
			print("Not found")
			
		
			
hash=hashtable(10)	
while(True):

	print("*******MENU*******")
	print("1.Insert using linear probing")
	print("2.Insert using double hashing")
	print("3.Search using linear")
	print("4.Exit")
	ch=int(input("Enter your Choice :"))

	if ch==1:
		key=int(input("Enter tel No :"))
		data=input("Enter name :")
		hash.linear_prob(key,[key,data])
		
	if ch==2:
		key=int(input("Enter tel No :"))
		data=input("Enter name :")
		hash.double_hash(key,[key,data])
		
	if ch==3:
		key=int(input("Enter key to Search :"))
		hash.search_linear(key)
		
	if ch==4:
		print("Exit Succesfully !!!!")
		break
	
	
	
		
	
