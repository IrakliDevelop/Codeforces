//Codeforces 976C
//The problem looks like this:
//You are given a sequence a1, a2, ..., an of one-dimensional segments numbered 1 through n. Your task is to find two distinct indices i and j such that segment ai lies within segment a j.
//Segment [l1, r1] lies within segment [l2, r2] iff l1 ≥ l2 and r1 ≤ r2.
//Print indices i and j. If there are multiple answers, print any of them. If no answer exists, print -1 -1.


//We should create a class which has two parameters: x and y coordinates. Let's call it Segment
//In the main class we should create ArrayList of Segments fill it with user inputs and then sort it by x coordinate
//then in the loop we search for nested segments. Once found, print and exit the program immediatly


import java.util.*;

public class Main {

    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {


        int n = Integer.parseInt(scanner.nextLine());
        int x;
        int y;

        ArrayList<Segment> segments = new ArrayList<>();

        for (int i = 0; i<n; i++){
            x = Integer.parseInt(scanner.next());
            y = Integer.parseInt(scanner.next());

            segments.add(new Segment(x,y, i+1));
        }


        //sort by x

        Collections.sort(segments, Comparator.comparingInt(Segment::getX1));

        int currPos = 0;

        for (int i = 1; i < n; i++){
            int length = segments.get(currPos).x2 - segments.get(currPos).x1;
            int compareLength = segments.get(i).x2 - segments.get(i).x1;
            if (segments.get(currPos).x1 + length >= segments.get(i).x1){
                if (segments.get(currPos).x1 + length >= segments.get(i).x1 + compareLength){
                    System.out.println(segments.get(i).pos + " " + segments.get(currPos).pos);
                    System.exit(0);
                } else if (segments.get(currPos).x1 == segments.get(i).x1 && segments.get(i).x1 + compareLength  > segments.get(currPos).x1 + length){
                    System.out.println(segments.get(currPos).pos + " " + segments.get(i).pos);
                    System.exit(0);
                } else {
                    currPos = i;
                }
            } else {
                currPos = i;

            }
        }

        System.out.println("-1 -1");
    }
}


class Segment{
    public int x1;
    public int x2;
    public int pos;

    public Segment(int x1, int x2, int pos){
        this.x1 = x1;
        this.x2 = x2;
        this.pos = pos;
    }

    public int getX1() {
        return x1;
    }

    public int getX2() {
        return x2;
    }

    public int getPos() {
        return pos;
    }
}