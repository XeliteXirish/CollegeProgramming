package com.shaunoneill.question4;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;
import android.database.sqlite.SQLiteOpenHelper;
import android.os.Bundle;

public class MainActivity extends AppCompatActivity {

    SQLiteDatabase database;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        database = openOrCreateDatabase("StudentDB", Context.MODE_PRIVATE, null);
        database.execSQL("CREATE TABLE IF NOT EXISTS list(ID INT PRIMARY KEY AUTOINCREMENT NOT NULL, Name TEXT, List TEXT);");

    }

    void InsertItem(String name, String items) {
        database.execSQL("INSERT INTO list VALUES ('" + ')");
    }

}
