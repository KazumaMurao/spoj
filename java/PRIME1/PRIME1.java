import java.io.*;
import java.util.*;

class PRIME1{
    public static void main(String[] args) throws IOException {
	int c, buf_m;
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	c = Integer.parseInt(in.readLine());

	for (int i=0;i<c;i++){
	    String str = in.readLine();
	    String[] strs = str.split(" ");
	    int m = Integer.parseInt(strs[0]);
	    int n = Integer.parseInt(strs[1]);
	    
	    ArrayList<Integer> array = new ArrayList<Integer>();
	    array.add(2);
	    if (2>m-1) System.out.println(j);

	    for (int j=3;j<n+1;j++){
		int d = 1;
		for (int k=0;k<array.size();k++){
		    int buf = array.get(k);
		    if ( j%buf==0 ){
			d = 0;
			break;
		    }
		}
		if ( d==1 ) {
		    if (j<Math.pow(n,0.5)) array.add(j);
		    if (j>m-1) System.out.println(j);
		}
	    }

	    System.out.println();
	}
    }
}