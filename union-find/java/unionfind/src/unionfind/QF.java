package unionfind;

public class QF {

	private int[] id;

	public QF(int N) {
		id = new int[N];
		for (int i = 0; i < id.length; i++)
			id[i] = i;
	}

	public boolean connected(int p, int q) {
		return id[p] == id[q];
	}

	public void union(int p, int q) {
		// p recupere l identite de q
		int idp = id[p];
		int idq = id[q];

		for (int i = 0; i < id.length; i++)
			if (id[i] == idp)
				id[i] = idq;
	}
}
