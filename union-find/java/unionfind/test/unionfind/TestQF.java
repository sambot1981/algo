package unionfind;

import org.junit.Assert;
import org.junit.Test;

public class TestQF {

	@Test
	public void initializeQF() {
		QF tester = new QF(10);
		Assert.assertNotNull("QF null built", tester);
	}

	@Test
	public void InitialNotConnected() {
		int N = 10;
		QF qf = new QF(N);
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++)
				if (i != j)
					Assert.assertFalse("it is connected", qf.connected(i, j));
	}

	@Test
	public void connectTwoComponents() {
		int N = 10;
		QF qf = new QF(N);
		Assert.assertFalse("it is connected", qf.connected(5, 6));
		qf.union(5, 6);
		Assert.assertTrue("it is not connected", qf.connected(5, 6));
		Assert.assertTrue("it is not connected", qf.connected(6, 5));
	}
	
	@Test
	public void connectTwoComponents2() {
		int N = 10;
		QF qf = new QF(N);
		Assert.assertFalse("it is connected", qf.connected(5, 6));
		qf.union(5, 6);
		qf.union(5, 6);
		Assert.assertTrue("it is not connected", qf.connected(5, 6));
		Assert.assertTrue("it is not connected", qf.connected(6, 5));
	}


}
