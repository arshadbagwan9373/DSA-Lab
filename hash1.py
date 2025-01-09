
def div_hashfun(k,m):
	print("Div Index=",k%m)
	

	
def midsqr_hashfun(key,size):
	ind=""
	ele=str(key*key)
	s=len(str(size))-1
	
	midi=int(len(str(key))/2)
	
	for i in range(0,s):
	
		ind=ind+ele[midi]
		midi+=1
	print("MidSquare Index=",ind)
	
#------------
def fold_hashfun(key,size):
	k=str(key)
	s=len(str(size))-1
#-----------	
	
	
		
		
def div_hf():
	for key in keys:
		index=div_hash_fun(key,s)
		hash_table[index]=key
		print(hash_table)

while True:
	print("***** MENU ******")	
	print("1.Division Method")	
	print("2.MidSquare Method")
	print("3.Folding Method")
	print("4.Exit")
	ch=int(input("Enter your Choice :"))	



	if ch==1:
		k=int(input("Enter key element :"))
		m=int(input("Enter hash Table Size:"))
		div_hashfun(k,m)
	
	
	if ch==2:
		k=int(input("Enter key element :"))
		m=int(input("Enter hash Table Size:"))
		midsqr_hashfun(k,m)
	
	if ch==4:
		break
	

	

