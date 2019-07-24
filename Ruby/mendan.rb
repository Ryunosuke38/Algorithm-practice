class Interview

  attr_reader :title, :time, :contents

  def initialize(title, time, contents)
    @title = title
    @time = time
    @contents = contents
  end
end

def post_interview(interviews)
  puts "面談の議題を記入してください"
  title = gets.chomp

  puts "面談の日時について記入してください"
  time = gets.chomp

  puts "面談の内容について記入してください"
  contents = gets.chomp

  interviews << Interview.new(title, time, contents)

  puts "入力した情報を保存しました"
end

def destroy_interview(interviews)
  if interviews.empty?
    puts "まだ面談は登録されていません"
    return
  end

  interviews.each_with_index { |interview, i| puts "#{i+1}. #{interview.title}" }

  puts interviews.size+1
  puts "削除したい番号を入力してください(半角数字のみ)"

  des_num = gets.to_i


  if 0 < des_num && des_num < interviews.size+1
    interviews.delete_at(des_num - 1)
    puts "指定した番号の面談予定を削除しました"
  else
    puts "入力した値は無効です"
    return
  end
end

def show_interview(interviews)
  if interviews.empty?
    puts "まだ面談は登録されていません"
    return
  end

  interviews.each_with_index do |interview, i|
    puts "---------------------------------------"
    puts "#{i+1}"
    puts "面談の議題   : #{interview.title}"
    puts "日時   : #{interview.time}"
    puts "内容   : #{interview.contents}"
    puts "---------------------------------------"
  end

end

def end_program
  puts "アプリケーションを終了しました"
  exit
end

def exception
  puts "入力値が無効です"
  puts "もう一度入力してください"
end

interviews = []

while true do
  puts "実行したい処理の番号を選択してください(半角数字のみ)\n\n"

  puts "[1]:面談の予定を登録する"
  puts "[2]:面談の予定を削除する"
  puts "[3]:面談の予定の一覧を表示"
  puts "[4]:アプリケーションの終了"

  input = gets.to_i

  if input == 1
    post_interview(interviews)
  elsif input == 2
    destroy_interview(interviews)
  elsif input == 3
    show_interview(interviews)
  elsif input == 4
    end_program
  else
    exception
  end

end
