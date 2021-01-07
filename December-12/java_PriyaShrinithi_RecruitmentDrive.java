package com.company;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;

public class RecruitmentDrive
{
    private List<String[]> columns = new ArrayList<>();
    private double b0 = 0;
    private double b1 = 0;
    private double b2 = 0;
    private double threshold = 0.5;
    String readCSV(String csv_link, double gpa, double xp) throws IOException {
            BufferedReader reader = new BufferedReader(new FileReader(csv_link));
            String line ="";
            while((line = reader.readLine())!=null) {
                columns.add(line.split(","));
            }
            reader.close();
        predict(columns);
        if(predict(gpa, xp))
            return "Selected";
        return "Unselected";
    }

    void predict (List <String[]> columns)
    {
        for(String [] row: columns)
        {
            try{
                double x1 = Double.parseDouble(row[0]);
                double x2 = Double.parseDouble(row[1]);
                double y = Integer.parseInt(row[2]);
                double prediction = prediction(b0, b0, b1, x1, x2);
                b0 = stochasticGradient(b0, 1,prediction, y);
                b1 += stochasticGradient(b1, x1, prediction, y);
                b2 += stochasticGradient(b2, x2, prediction, y);
            }catch(Exception e){}

        }
    }

    double stochasticGradient(double b, double x, double prediction, double y)
    {
        return b+0.3*(y - prediction)*prediction*(1-prediction)*x;
    }

    double prediction(double b0, double b1, double b2, double x1, double x2)
    {
        return 1/(1 + (Math.exp( - (b0+(b1*x1)+(b2*x2)))));
    }

    boolean predict(double gpa, double xp)
    {
        if(prediction(b0, b1, b2, gpa, xp)>threshold)
            return true;
        return false;
    }
}
