String studentGrade(String name, int score) {
  if (score < 0 || score > 100) {
    return "Invalid Grade";
  } else if (score >= 90 && score <= 100) {
    return "A";
  } else if (score >= 80 && score <= 89) {
    return "B";
  } else if (score >= 70 && score <= 79) {
    return "C";
  } else if (score >= 60 && score <= 69) {
    return "D";
  } else {
    return "F";
  }
}

void main() {
  String studentName = "Amer Mahbub";
  int testScore = 85;
  String grade = studentGrade(studentName, testScore);
  print("$studentName's grade: $grade");
}
