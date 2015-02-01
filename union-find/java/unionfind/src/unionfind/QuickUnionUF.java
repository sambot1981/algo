package unionfind;
//lazy approach
// for every node we give the reference to the root in the id vector
public class QuickUnionUF{
	
	private int[] root;
	
	public QuickUnionUF(int N)
	{
		root = new int[N];
		for (int i = 0; i < root.length; i++) {
			root[i] = i;
		}
		
	}
	private int getRoot(int p)
	{
		int rootp = root[p];
		while (rootp !=root[rootp])
				rootp =root[rootp];
		return rootp;

		
	}
	public boolean connected(int p, int q)
	{
		int rootp = getRoot(p);
		int rootq = getRoot(q);

		return (rootp == rootq);

	}

	public void union(int p, int q)
	{
		int rootp = getRoot(p);
		int rootq = getRoot(q);
		root[rootp] = rootq;
		
	}
}
