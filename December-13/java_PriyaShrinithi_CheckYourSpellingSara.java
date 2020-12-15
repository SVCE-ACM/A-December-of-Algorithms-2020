package com.company;

import java.util.*;

class Trie
{

    String prefix;
    class TrieNode
    {
        public String word;
        TrieNode children [] = new TrieNode[26];
        boolean isEndOfWord;
    }
    private TrieNode root;
    Trie()
    {
        root = new TrieNode();
    }
    void insert(String word) {
        TrieNode crawl = root;
        int key = 0;
        for (int i = 0; i < word.length(); i++) {
            key = word.charAt(i) - 'a';
            if (crawl.children[key] == null)
                crawl.children[key] = new TrieNode();
            crawl = crawl.children[key];
        }
        crawl.isEndOfWord = true;
        crawl.word = word;
    }

    boolean search(String word)
    {
        TrieNode crawl = root;
        String pre = "";
        for(int i = 0;i<word.length();i++)
        {
            int key = word.charAt(i)-'a';
            pre = pre.concat(String.valueOf(word.charAt(i)));
            if(crawl.children[key]==null)
            {
                prefix = pre.substring(0, pre.length()-1);
                return true;
            }
            crawl = crawl.children[key];;
        }
        return crawl.isEndOfWord;
    }
    String findCorrect(String prefix)
    {
        TrieNode crawl = root;
        String correct = prefix;
        for(int i = 0;i<prefix.length();i++)
        {
            int key = prefix.charAt(i)-'a';
            if(crawl.children[key]!=null)
                crawl = crawl.children[key];
        }
        if(crawl.children!=null) {
            Deque<TrieNode> nodeQ = new ArrayDeque<>();
            nodeQ.addLast(crawl);
            while (!nodeQ.isEmpty())
            {
                TrieNode _crawl = nodeQ.pollFirst();
                for(TrieNode _crawler: _crawl.children)
                {
                    if(_crawler!=null)
                        nodeQ.addLast(_crawler);
                }
                if(_crawl.isEndOfWord){
                    correct = _crawl.word;
                    break;
                }
            }
        }
        return correct.substring(0,1).toUpperCase()+correct.substring(1);
    }
}

public class MistakeCorrection
{
    String mistake(List<String> dictionary, String mistake)
    {
        String correct = "";
        Trie root = new Trie();
        for(String word: dictionary)
        {
            root.insert(word.toLowerCase());
            //System.out.println(root.search(word.toLowerCase()));
        }
        if(root.search(mistake.toLowerCase()));
            correct = root.findCorrect(root.prefix);
        return correct;
    }
}
