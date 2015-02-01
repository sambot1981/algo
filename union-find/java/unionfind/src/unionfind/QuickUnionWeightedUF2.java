package unionfind;

public class QuickUnionWeightedUF2 {

	int root[];
	int sz[];
	
	public QuickUnionWeightedUF2(int l) {
		root = new int[l];;
		sz = new int[l];
		for (int i = 0; i < root.length; i++) {
			root[i] = i;
			sz[i] =1;
		}
		
	}
	
	public boolean connected(int p, int q){
		return false;
	}
	public void union(int p,int q){
		int rootp =getRoot(p);
		int rootq =getRoot(q);
		if (rootp==rootq) return;
		else
		{
			if (sz[rootp]>sz[rootq]) root[rootq] = rootp;
			else root[rootp] = rootq;
		}
	
	}
	
	public int getRoot(int p){
		int i = p;
		while (root[i]!=i) i=root[i];
		return i;
	}

}
