# DxLib for HTML5  Visual Studio Codeサンプルプログラム実行用パッケージ

## 概要

emscripten, DxLib for HTML5 を使って WebGL + WebAssembly アプリケーションを作成できるように
設定を済ませたパッケージです.

## 前提要件

- Visual Studio Code (1.42.1 で動作確認済み)
- emscripten SDK

emscripten の導入は <https://nanka.hateblo.jp/entry/2017/04/11/005318> や
<https://www.slideshare.net/llamerada-jp/cmu29> (やや読破難度高いスライド) が参考になると思います.

## 推奨インストール

- C/C++ VSCode Extension
- Debugger for Chrome
- Debugger for Firefox

## ビルド

- Ctrl(Cmd)+Shift+B (デバッグビルド)
- リリースビルドをしたいときは Ctrl(Cmd)+Shift+P でタスクの実行を選んで, Build Release

## 実行

- Ctrl(Cmd)+Shift+P でタスクの実行を選んで, Run Local Server and Open Browser
- Debugger for Chrome または Debugger for Firefox をインストール済みであれば Ctrl(Cmd)+Shift+P でタスクの実行を選んで, Run Local Server を選んだ後, デバッグの開始でデバッグができます

## デバッグ

- デバッグビルド時は C++ に対する SourceMap が有効になるので, C++ ソースファイル上にブレークポイントが仕掛けられます
- ただ, 変数ウォッチは機能しているか怪しい模様

## 質問点など

- To be announced...

## ライセンス表記

- MIT ライセンスにて配布します (基本的に何でもできると思います; 継承すべきライセンスも大丈夫だと思う...たぶん)
- 依存ライブラリのライセンスなどは LICENSE.txt を参照のこと
- DxLib for HTML5 を使った Web アプリに必要なライセンス表記は, freetype を除いて DxLib と同じなので参考までに

## 謝辞

- デフォルトのフォントとして同梱させてもらっているフォント (ロゴたいぷゴシック) のサイトです. <http://www.fontna.com/blog/1226/>
- 移植元のDXライブラリのサイトです. <https://dxlib.xsrv.jp/>
- emscripten のサイトです. <https://emscripten.org/>

これらのプロジェクトのおかげで DxLib for HTML5 は成り立っています. ありがとうございます.

- - -

DxLib for HTML5  Copyright (C) 2020 かめのこにょこにょこ
