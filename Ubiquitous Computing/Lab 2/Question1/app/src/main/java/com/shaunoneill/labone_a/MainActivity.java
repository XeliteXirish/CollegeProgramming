package com.shaunoneill.labone_a;

import android.content.Intent;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;

import androidx.appcompat.app.AppCompatActivity;

public class MainActivity extends AppCompatActivity {

    public static final String INTENT_NAME = "name";

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        final EditText editTextName = findViewById(R.id.editTextName);
        EditText editTextPassword = findViewById(R.id.editTextPassword);
        EditText editTextPhone = findViewById(R.id.editTextPhone);
        EditText editTextEmail = findViewById(R.id.editTextEmail);

        Button buttonSubmit = findViewById(R.id.buttonSubmit);
        buttonSubmit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                Intent intent = new Intent(MainActivity.this, SendingActivity.class);
                intent.putExtra(INTENT_NAME, editTextName.getText().toString());
                startActivity(intent);
            }
        });
    }
}
