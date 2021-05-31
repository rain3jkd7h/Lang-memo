#!/usr/bin/python3

def Test(valName,value,tget,line):
	inline=3
	invalues=valName,line
	invalcmp=str,int
	index=1,4
	for i in range(2):		#引数のエラー処理
		if not type(invalues[i]) is invalcmp[i]:
			try:
				raise ValueError("Error SLF1: This \'arg"+str(index[i])+"\' is not "+str(invalcmp[i])+" :Line "+str(inline))
			except ValueError as e:
				print(e)
				return 1
	
	if not type(value) is tget:	#厳守したい変数のエラー処理
		try:
			raise ValueError("Error TYPE: This \'"+valName+"\' is not "+str(tget)+" :Line "+str(line))
		except ValueError as e:
			print(e)
			return 1

def main():
	A=1;	#line 23
	if Test("A",A,str,23):	#Aは文字列型であるべきと想定
		return
	print(A)
main()
