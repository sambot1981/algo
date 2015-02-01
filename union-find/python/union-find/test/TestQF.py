'''
Created on 1 בפבר 2015

@author: benjaminbo
'''
from src.QF import QF

try:
    import unittest2 as unittest
except ImportError:
    import unittest

class TestQF(unittest.TestCase):
    '''
    classdocs
    '''

    

    def test_instanciation(self):
        qf = QF(10)         
        self.assertEquals(isinstance(qf, QF), True)
        self.assertEquals(type(qf) == QF, True)
            
    def test_initialNotConnected(self): 
        N = 10
        qf = QF(N)
        for i in range(N):
            for j in range(N):
                if i != j: 
                    self.assertFalse(qf.connected(i, j),"it is connected")
                    
                    
    def test_connectTwoComponents(self):
        N = 10
        qf = QF(N)
        self.assertFalse(qf.connected(5, 6), "it is connected")
        qf.union(5, 6)
        self.assertTrue(qf.connected(5, 6), "it is not connected")
        self.assertTrue(qf.connected(6, 5), "it is not connected")
        
    def test_connectTwoComponents2(self):
        N = 10
        qf = QF(N)
        self.assertFalse(qf.connected(5, 6), "it is connected")
        qf.union(5, 6);
        qf.union(5, 6);
        self.assertTrue(qf.connected(5, 6), "it is not connected")
        self.assertTrue(qf.connected(6, 5), "it is not connected")
