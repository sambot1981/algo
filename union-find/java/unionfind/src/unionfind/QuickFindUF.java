package unionfind;

public class QuickFindUF {

	
	private int[] id;
	//constructor
	public QuickFindUF(int N)
	{
		id =new int[N];
		// initialisation
		for (int i = 0; i < N; i++) {
			id[i] = i;
		}
	}
	
	
	public boolean connected(int p, int q)
	{
		return id[p] == id[q];
	}
	
	public void union(int p , int q)
	{
		if (connected(p, q))  return;
		 int pid = id[p];
		 int qid = id[q];
		 
		 for (int i = 0; i < id.length; i++) {
			if (id[i] == pid) id[i] = qid;
		}
		 
	}
	
	public void display()
	{
		for (int i = 0; i < id.length; i++) {
	        System.out.println(id[i]);

		}

	}
}
