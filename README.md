# 概要
テキストファイルを独自の構文でllvmIRに静的コンパイルします。<br>
構文の特徴としては、入出力の関数を一文字で呼び出せる、改行で命令を区切るなどがあります。
# 動作確認済み環境
WSL1 Ubuntu 18.04.5 LTS (Bionic Beaver)
# 入手方法
`git clone https://github.com/kechigon/klang.git`<br>

klangのビルド、klangのコードを実行するためのパッケージをインストールしてください<br>

`sudo apt install llvm bison flex`
# ビルド
`/build`で`make`を実行してください`/bin`配下にklangが生成されます
# 実行方法
## コンパイル
テキストファイルからllvmIRにコンパイルし、out.llとして出力します。<br>
オプションでコンパイルに関する情報を表示できます。<br>

`./klang 任意のテキストファイル オプション`
### オプション
構文解析過程を表示 `-s`<br>

コードの意味を表示 `-m`<br>

llvmIRを表示 `-l`<br>

<例>すべてを表示 `-sml`
## リンク
入出力の機能は`build-in-function`ディレクトリ内のファイルとリンクすると実行可能になります。<br>

`llvm-link out.ll bin/build-in-function/hoge.ll -S -o hoge.ll`

### それぞれのファイルについて
`printDouble.ll` double型の出力機能<br>

`printStr.ll` 文字列の出力機能<br>

`printNewLine.ll` 改行出力機能<br>

`scanDoubl.ll` double型の入力機能

## 実行
`lli hoge.ll`<br>

または<br>

```
llc hoge.ll
clang hoge.s -o hoge
./hoge
```
# klangの機能
klangは命令を改行により区切ります。また、今のところ関数という概念がないのでC言語のmain関数のようなものを作る必要がありません。<br>
## 変数宣言
klangの型はdouble型のみですが、明示的に変数の前に`double`とタイプします。<br>
複数宣言、宣言時代入、またその両方を組み合わせることも可能です。<br>

`double a`

`double a, b, c`

`double a, b, c = 1`
## 代入
複数に代入することも可能です。<br>

`a = 1`<br>

`a, b, c = 1`
## 代入演算
`+=`で足し算、`-=`で引き算、`*=`で掛け算、`/=`で割り算が可能です。<br>
複数の変数に対しても可能です。<br>

`a += 1`<br>

`a, b, c -= 1`
## 標準出力
`$`に続けて文字列、変数、式などを出力し、`;`で改行します。<br>
`;`の前と後は改行が必要です。<br>

`$"hello world"`<br>

```
$"1+1=" $1+1
;
```
## 標準入力
`#`の後に変数を指定します。<br>
複数指定も可能です。<br>

`#a`<br>

`#a, b, c`
## 演算
`+`,`-`,`*`,`/`の四則演算子、`==`, `!=`,`<`,`>`,`<=`,`>=`の比較演算子、`&`,`|`の論理演算子があります。
## 制御構文
条件式が数値だった場合、0で偽、その他は真と評価されます。<br>
if文はifとif-elseがあり、if-elseの場合`else`を改行の前に書きます。<br>

<if例><br>
```
if(式)
{
  ~
}else
{
  ~
}
```
<br>

<for例><br>
```
for(double hoge = 1, 式, hoge += 1)
{
  ~
}
```
<br>

<while例><br>
```
while(式)
{
  ~
}
```
## コメント
`/*`と`*/`で囲んだ範囲
## 実装予定の機能
配列<br>

関数
# 見つかっているバグ
- 条件式と条件式を`&`,`|`するとすべて真になる　<例>`a == 1 & b != 1`
- 長い文字列が表示されない
- 制御構文の中に空行を入れられない
- 変数のみを条件式にするとすべて真になる　<例>`a == 0 -> true, a -> true`
