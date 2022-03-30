with open('./abc.csv', "rt") as f:
  for line in f.readlines():
    (id,name,did) = line.split("\n")[0].split(',')
    print('{id} {name} {did}'.format(id=id,name=name,did=int(did)))