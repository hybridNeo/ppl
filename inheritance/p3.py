class A:
	def apple():
		print("Apple")
class B:
	def orange():
		print("Orange")

class C(A,B):
	def hello():
		A.apple()
		B.orange()
def main():
	c = C()
	C.hello()

if __name__ == '__main__':
	main()
		
