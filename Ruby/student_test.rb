class Student
  @@students = []
  attr_accessor :name, :score
  def self.input
    test = Student.new
    puts "生徒の名前を入力してください"
    test.name = gets.chomp
    puts "得点を入力してください"
    test.score = gets.chomp.to_i
    @@students << test
  end

  def self.show_scores
    line = "-----------------------------------"
    puts line
    sum = 0
    # 生徒の名前と得点の一覧表示と平均点の表示
    @@students.each do |test|

      puts "#{test.name} : #{test.score}点"
      sum = sum + test.score
    end

    puts line
    puts "平均得点 : #{sum/@@students.count}点"
  end
end

while true do
  puts "「0」:生徒の得点を入力する"
  puts "「1」:得点一覧を表示する"
  input = gets.to_i

  if input == 0
    Student.input
  elsif input == 1
    Student.show_scores
    exit
  else
    puts "入力された値は無効です"
  end
end
