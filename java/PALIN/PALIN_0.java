import java.io.*;

class PALIN{
    public static String nextInt(String cur){
	String opt = "";
	int num = cur.length();
	int buf_int;
	for (int i=num-1;i>-1;i--){
	    buf_int = Integer.parseInt(""+cur.charAt(i));
	    if (buf_int != 9){
		buf_int = buf_int + 1;
		opt = cur.substring(0,i) + String.valueOf(buf_int) + opt;
		break;
	    } else opt = "0" + opt;
	    if (i==0){
		opt = "1" + opt;
		break;
	    }
	}
	return opt;
    }

    public static String palinEven(String ipt){
	String opt_l = "", opt_r = "";
	int num = ipt.length();
	int i = num/2 - 1;
	for (int k=i;k>-1;k--){
	    if(Integer.parseInt(""+ipt.charAt(k))>Integer.parseInt(""+ipt.charAt(num-k-1))){
		opt_l = opt_l + ipt.substring(0,i+1);
		num = opt_l.length();
		for (int l=num-1;l>-1;l--){
		    opt_r = opt_r + opt_l.charAt(l);
		}
		break;
	    } else if (Integer.parseInt(""+ipt.charAt(k))<Integer.parseInt(""+ipt.charAt(num-k-1))){
		//opt_l = opt_l + String.valueOf(Integer.parseInt(ipt.substring(0,i+1)) + 1);
		opt_l = opt_l + nextInt(ipt.substring(0,i+1));
		num = opt_l.length();
		for (int l=num-1;l>-1;l--){
		    opt_r = opt_r + opt_l.charAt(l);
		}
		break;
	    } else if (k==0){
		return ipt;
	    }
	}
	return opt_l + opt_r;
    }

    public static String palinOdd(String ipt){
	String opt_l = "", opt_r = "";
	int num = ipt.length();
	int i = (num-1)/2;
	for (int k=i;k>-1;k--){
	    if(Integer.parseInt(""+ipt.charAt(k))>Integer.parseInt(""+ipt.charAt(num-k-1))){
		opt_l = opt_l + ipt.substring(0,i+1);
		num = opt_l.length()-1;
		for (int l=num-1;l>-1;l--){
		    opt_r = opt_r + opt_l.charAt(l);
		}
		break;
	    } else if (Integer.parseInt(""+ipt.charAt(k))<Integer.parseInt(""+ipt.charAt(num-k-1))){
		//opt_l = opt_l + String.valueOf(Integer.parseInt(ipt.substring(0,i+1)) + 1);
		opt_l = opt_l + nextInt(ipt.substring(0,i+1));
		num = opt_l.length()-1;
		for (int l=num-1;l>-1;l--){
		    opt_r = opt_r + opt_l.charAt(l);
		}
		break;
	    } else if (k==0){
		return ipt;
	    }
	}
	return opt_l + opt_r;
    }

    public static String palin(String ipt){
	if (ipt.length()%2==0) return palinEven(ipt);
	else return palinOdd(ipt);
    }

    public static void main(String[] args) throws IOException{
	int c;
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	c = Integer.parseInt(in.readLine());

	for (int i=0;i<c;i++){
	    //String str = String.valueOf(Integer.parseInt(in.readLine())+1);
	    String str = nextInt(in.readLine());
	    String res = palin(str);
	    System.out.println(res);
	}
    }
}