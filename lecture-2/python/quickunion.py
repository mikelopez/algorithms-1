
class QuickUnion:
    id = []
    def __init__(self):
        # set value to its index
        [self.id.append(x) for x in range(0, 10)]
    
    def __root(self, n):
        print "\t- Checking root for %s...."%n
        while (n != self.id[n]):
            print "\t\t- n is not id[n] ( %s ) " % self.id[n]
            n = self.id[n]
            print "\t\t- n is now set to id[n] ( %s ) " % n
        return n
    
    def union(self, p, q):
        print "RUNNING UNION(%s, %s) " % (p, q)
        i = self.__root(p)
        print "- union() root(p) to i = %s" % i
        j = self.__root(q)
        print "- union() root(q) to j = %s" % j
        self.id[i] = j

        print "set id[i] = j" 
        print "set id[%s] = %s" % (i, j)
    
    def verbose(self):
        print "Index\tRoot"
        for index, root in enumerate(self.id):
            print "%s\t%s" % (index, root)


if __name__ == "__main__":
    qu = QuickUnion()
    qu.verbose()
    qu.union(4, 3)
    qu.verbose()
    qu.union(3, 8)
    qu.verbose()
    qu.union(6, 5)
    qu.verbose()
    qu.union(9, 4)
    qu.verbose()
    qu.union(2, 1)
    qu.verbose()
    qu.union(5, 0)
    qu.verbose()
    qu.union(7, 2)
    qu.verbose()
    qu.union(6, 1)
    qu.verbose()
    qu.union(7, 3)
    qu.verbose()
