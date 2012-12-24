import java.io.*;

class TEST{
    public static void main(String[] args) throws IOException {
	int c;
	BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
	while (true){
	    c = Integer.parseInt(in.readLine());
	    if (c==42) break;
	    System.out.println(c);
	}
    }
}