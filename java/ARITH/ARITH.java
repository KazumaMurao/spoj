import java.io.*;

class ARITH{
    public static String add(String ipt1, String ipt2){
	int len;
	if (ipt1.length()<=(ipt2.length()+1)) len = ipt.2.length()+1;
	else len = 
	return "add";
    }

    public static String subtract(String ipt1, String ipt2){
	return "subtract";
    }
    
    public static String multiple(String ipt1, String ipt2){
	return "multiple";
    }

    public static String arith(String ipt){
	String leftIpt,rightIpt;
	int i = ipt.indexOf('+');
	if (i>-1) {
	    leftIpt = ipt.substring(0,i);
	    rightIpt = ipt.substring(i+1);
	    return add(leftIpt,rightIpt);
	} else {
	    int j = ipt.indexOf('-');
	    if (j>-1) {
		leftIpt = ipt.substring(0,j);
		rightIpt = ipt.substring(j+1);
		return subtract(leftIpt,rightIpt);
	    } else {
		int k = ipt.indexOf('*');
		if (k>-1) {
		    leftIpt = ipt.substring(0,k);
		    rightIpt = ipt.substring(k+1);
		    return multiple(leftIpt,rightIpt);
		}
	    }
	}
	return "-1";
    }

    public static void main(String[] args) throws IOException{
	int c;
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	BufferedWriter out = new BufferedWriter(new OutputStreamWriter(System.out));
	c = Integer.parseInt(in.readLine());
	String strs[] = new String[c];

	for (int i=0;i<c;i++){
	    strs[i] = in.readLine();
	}
	for (int i=0;i<c;i++){
	    String res = arith(strs[i]);
	    out.write(res+"\n");
	    out.flush();
	}

	in.close();
	out.close();

    }
}