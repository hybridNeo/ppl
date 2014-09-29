def triangle(n):
	if(n==0):
		return []
	if(n==1):
		return [[1]]
	new_row = [1]
	result = triangle(n-1)
	last_row = result[-1]
	for i in range(len(last_row)-1):
		new_row.append(last_row[i] + last_row[i+1])
	new_row += [1]
	result.append(new_row)
	return result


def main():
	limit = int(input('Enter the number of lines to print'))
	t = triangle(limit)
	a = int(limit)
	for b in t:
		s = ''
		space = '  '
		for k in range(a):
			space+= '  '
		for k in b:
			l = "{0:3s}".format(str(k))
			s =s + l+ ' '
			
		m = space +s
		print(m)
		a = a-1	
if __name__ == '__main__':
	main()
