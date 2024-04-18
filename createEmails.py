from random import randint
import pandas

prefix = ["guy_", 'bob_', 'hanz_', 'eduardo_', 'howard_', 'saul_', 'paul_', 'steve_', 'nelson_', "bill_" , "billy_", 'eli_']
suffix = ["bar", 'smith', 'goodman', 'lamar', 'kliener', 'vance', 'coomer', 'hamlin', 'silly', 'wilson', 'salamanca', 'sue']
new_lst = []


for i in range(0,10001):
	num1 = randint(0,11)
	num2 = randint(0,11)
	if i % 5 == 0:
		new_lst.append(prefix[num1] + suffix[num2] + " " + "@gmail.com")
	else:
		new_lst.append(prefix[num1] + suffix[num2] + str(randint(0, 10000)) + "@gmail.com")

pd = pandas.DataFrame(new_lst)
print(pd)

pd.to_csv('emails.csv', index=False)
