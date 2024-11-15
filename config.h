#pragma once
#include <opencv2/opencv.hpp>
#ifndef CONFIG_H
#define CONFIG_H

// Google Vision API 키를 상수로 정의
const std::string GOOGLE_API_KEY = "AIzaSyDuVbRDX98y0WK7c5HSDdHs6sbqohQZVFk";

// 데이터베이스 연결 정보를 상수로 정의
const std::string DB_HOST = "localhost";         // 데이터베이스 호스트명
const std::string DB_USER = "root";              // 데이터베이스 사용자명
 const std::string DB_PASSWORD = "8761";		// 데이터베이스 비밀번호

#endif // CONFIG_H