package com.company;

import org.json.JSONException;
import org.json.JSONObject;

import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

public class JSQL
{
    String convertToSQL(JSONObject json) throws JSONException {


        String sql = "create table "+json.get("table name")+" (";
        JSONObject header = (JSONObject) json.get("headers");
        for(Iterator i = header.keys();i.hasNext();)
        {
            JSONObject key = (JSONObject) header.get((String) i.next());
            String dt = (String) key.get("data type");;
            String cn = (String) key.get("column name");
            sql+=dt+" "+cn+", ";
        }
        sql = sql.substring(0, sql.length()-2)+")";
        JSONObject record = (JSONObject) json.get("records");
        int  i = 0;
        for(Iterator keys = record.keys();keys.hasNext();)
        {

            String value = String.valueOf(record.get((String) keys.next()));
            sql+="\ninsert into " + json.get("table name")+" values "+"("+value.substring(1, value.length()-1)+")";
            i++;
        }
        return sql;
    }
}
