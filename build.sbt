val scala3Version = "3.1.3"

lazy val root = project
  .in(file("."))
  .settings(
    name := "prequel",
    version := "0.1.0-SNAPSHOT",

    scalaVersion := scala3Version,

    libraryDependencies += "org.scalameta" %% "munit" % "0.7.29" % Test,
    libraryDependencies += "org.scala-lang.modules" %% "scala-swing" % "3.0.0"
  )
