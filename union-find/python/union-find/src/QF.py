# coding: utf8

'''
Created on 25 בינו 2015

@author: benjaminbo
'''

class QF(object):
    '''
    quickFind
    '''
    id = None

    def __init__(self, N):
        self.id = list(range(N))
        
    def connected(self, p, q):
        return self.id[p] == self.id[q]
    
    def union(self, p, q):
        idp = id[p]
        idq = id[q]
        
        for i in range(len(id)):
            if id[i] == idp : id[i] = idq
    