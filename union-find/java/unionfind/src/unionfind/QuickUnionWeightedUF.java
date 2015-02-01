package unionfind;
//lazy approach
// for every node we give the reference to the root in the id vector
public class QuickUnionWeightedUF{
	
	private int[] root;
	private int[] sz;
	
	public QuickUnionWeightedUF(int N)
	{
		root = new int[N];
		sz = new int[N];
		for (int i = 0; i < root.length; i++) {
			{
				root[i] = i;
				sz[i] = 1;
			}
		}
		
	}
	private int getRoot(int p)
	{
		int rootp = root[p];
		while (rootp !=root[rootp])
		{
			rootp =root[rootp];
		}
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
		int szp =sz[p];
		int szq =sz[q];
		if (szp < szq)
		{ 
			root[rootp] = rootq;
			sz[rootq]+=sz[rootp];
		}
		else
		{
			root[rootq] = rootp;
			sz[rootp]+=sz[rootq];
		}
	}
}

