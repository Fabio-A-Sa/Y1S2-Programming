astring = "         1         x        9                "
alist = [int(x) for x in astring.split(" ") if x.lower() != "x" and x != ""]
print(alist)

