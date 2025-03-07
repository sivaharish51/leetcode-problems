class Solution {
    public int minimumPushes(String word) {
        int n = word.length();

        // Calculate the number of complete 8-letter rounds
        int completeRound = n / 8;

        // Calculate the number of remaining letters after complete rounds
        int remainingLetters = n % 8;

        // finding no of times keys are pressed in complete rounds
        int round = 1;
        int keyPressed = 0;

        while(completeRound > 0) {

            keyPressed += 8*round;

            // update 
            completeRound--;
            round++;
        }

        // finding no of times keys are pressed for remaining letters
        keyPressed += remainingLetters * round;

        return keyPressed;
    }
}