// Copyright 2022
// 16:21 11/06/2022

#pragma once

struct Document {
    Document() = default;
    Document(int id, double relevance, int rating);
    int id = 0;
    double relevance = 0.0;
    int rating = 0;
};

enum class DocumentStatus {
    ACTUAL,
    IRRELEVANT,
    BANNED,
    REMOVED,
};
