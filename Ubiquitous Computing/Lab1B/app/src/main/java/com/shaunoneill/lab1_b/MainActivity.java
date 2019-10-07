package com.shaunoneill.lab1_b;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.TextView;
import android.widget.Toast;

import java.util.Random;

public class MainActivity extends AppCompatActivity {

    int score = 0;
    TextView textViewScore;
    Button buttonLeft, buttonRight;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        textViewScore = findViewById(R.id.textViewScore);
        buttonLeft = findViewById(R.id.buttonLeft);
        buttonRight = findViewById(R.id.buttonRight);

        applyScore();
        newButtonNumbers();
    }

    public void buttonClick(View view) {
        int leftNumber = Integer.parseInt(buttonLeft.getText().toString());
        int rightNumber = Integer.parseInt(buttonRight.getText().toString());

        newButtonNumbers();
        if (view.getId() == R.id.buttonLeft) {
            if (leftNumber > rightNumber) increaseScore();
            else resetScore();
        } else {
            if (rightNumber > leftNumber) increaseScore();
            else resetScore();
        }
    }

    private void newButtonNumbers() {
        int numberLeft = getRandomNumber(), numberRight = getRandomNumber();
        while (numberLeft == numberRight) numberRight = getRandomNumber();

        buttonLeft.setText(Integer.toString(numberLeft));
        buttonRight.setText(Integer.toString(numberRight));
    }

    private int getRandomNumber() {
        Random rand = new Random();
        return rand.nextInt(10 - 1);
    }

    private void increaseScore() {
        score++;
        applyScore();
        //Toast.makeText(this, "Correct! Well Done!", Toast.LENGTH_SHORT).show();
    }

    private void resetScore() {
        score = 0;
        applyScore();
        Toast.makeText(this, "Incorrect! Back to zero!", Toast.LENGTH_SHORT).show();
    }

    private void applyScore() {
        textViewScore.setText("Score: " + score);
    }
}
