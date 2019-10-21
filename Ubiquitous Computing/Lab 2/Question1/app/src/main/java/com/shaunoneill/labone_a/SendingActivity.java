package com.shaunoneill.labone_a;

import android.content.Intent;
import android.os.Bundle;
import android.widget.TextView;

import androidx.annotation.Nullable;
import androidx.appcompat.app.AppCompatActivity;

public class SendingActivity extends AppCompatActivity {

    @Override
    protected void onCreate(@Nullable Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);

        Intent intent = getIntent();
        String name = intent.getExtras().getString(MainActivity.INTENT_NAME);

        setContentView(R.layout.sending_activity);
        TextView textViewName = findViewById(R.id.textViewName);
        textViewName.setText("Thank you " + name + ", your request is being processed");

    }
}
