package com.company;

import java.io.IOException;
import java.io.InputStream;
import java.net.URL;
import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.List;
import java.util.regex.Pattern;

public class ValidAndAvailable
{
    private String validityStatus="The username is not valid";
    String userName;
    boolean validity(String userName)
    {
        this.userName = userName;
        String pattern = "^[a-zA-Z0-9_.-]*{1,21}$";
        Pattern charPatt = Pattern.compile(pattern);
        boolean valid = true;
        if(!charPatt.matcher(userName).matches())
            valid = false;
        else
            validityStatus = "The UserName is valid";

        return valid;
    }

    String availability(boolean valid, List<String> contents)
    {
        String availabilityStatus = "";
        if(!valid)
            return validityStatus;
        else if(valid && contents.contains(userName))
            availabilityStatus = " but not available";
        else
            availabilityStatus = " and available";
        return validityStatus+availabilityStatus;
    }

    List<String> urlExtract(String apiLink) throws IOException {
        URL url = new URL(apiLink);
        List <String> content;
        try(InputStream in = url.openStream())
        {
            content = new ArrayList<>(Arrays.asList(new String(in.readAllBytes(), StandardCharsets.UTF_8).split(",")));
        }
        List<String> contents = new ArrayList<>();
        for(String c: content)
        {
            if(c.contains("username")) {
                c = c.split(":")[1];
                contents.add(c.substring(2, c.length() - 1));
            }
        }
        System.out.println(contents);
        return contents;
    }
}
