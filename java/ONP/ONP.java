import java.io.*;

class ONP{
    public static String reverse(String ipt){
	//System.out.println(ipt);
	int k=1;
	int c1=0,c2=0;
	String lft="",mdl="",rgt="";
	if (ipt.charAt(k) != '('){
	    lft = String.valueOf(ipt.charAt(k));
	} else {
	    for (k=2;k<ipt.length();k++){
		if (ipt.charAt(k)==')'){
		    if (c1==0){
			lft = reverse(ipt.substring(1,k+1));
			break;
		    }
		    else c1--;
		} else if (ipt.charAt(k)=='(') {
		    c1++;
		}
	    }
	}
	k++;
	mdl = String.valueOf(ipt.charAt(k));
	k++;
	if (ipt.charAt(k) !='('){
	    rgt = String.valueOf(ipt.charAt(k));
	} else {
	    rgt = reverse(ipt.substring(k,ipt.length()-1));
	}
	return lft+rgt+mdl;
    }

    public static void main(String[] args) throws IOException{
	int c;
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	c = Integer.parseInt(in.readLine());

	for (int i=0;i<c;i++){
	    String str = in.readLine();
	    String res = reverse(str);
	    System.out.println(res);
	}
    }
}