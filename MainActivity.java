package com.example.suryateja.microcomputers1project;

import android.content.Intent;
import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.view.View;
import android.widget.Button;

public class MainActivity extends AppCompatActivity {

    private Button Start;

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        Button startbutton = (Button) findViewById(R.id.Start);
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        startbutton.setOnClickListener(new View.OnClickListener() {
            @Override
            public void onClick(View v) {

                activity2();


            }
        });
    }

        public void activity2() {
        Intent intent = new Intent(MainActivity.this, Activity2.class);
        startActivity(intent);


    }
}
