package com.shaunoneill.question3;

import android.graphics.drawable.Drawable;
import android.os.AsyncTask;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;
import android.widget.EditText;
import android.widget.ImageView;

import androidx.appcompat.app.AppCompatActivity;

import java.io.InputStream;
import java.net.URL;

public class MainActivity extends AppCompatActivity {

    ImageView imageView;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        final EditText editTextURL = findViewById(R.id.editTextURL);
        imageView = findViewById(R.id.imageView);
        Button buttonSubmit = findViewById(R.id.button);

        buttonSubmit.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {
                 new AsyncLoadImage().execute(editTextURL.getText().toString());
            }
        });
    }

    public class AsyncLoadImage extends AsyncTask<String, Void, Drawable> {

        @Override
        protected Drawable doInBackground(String... urls) {
            try {
                InputStream is = (InputStream) new URL(urls[0]).getContent();
                return Drawable.createFromStream(is, "src name");
            } catch (Exception e) {
                System.out.println("Exc=" + e);
                return null;
            }
        }

        @Override
        protected void onPostExecute(Drawable drawable) {
            imageView.setImageDrawable(drawable);
        }
    }

}
