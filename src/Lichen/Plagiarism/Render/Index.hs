{-# LANGUAGE OverloadedStrings #-}

module Lichen.Plagiarism.Render.Index where

import Data.Foldable
import Data.Monoid ((<>))

import Text.Blaze.Html5 ((!))
import qualified Text.Blaze.Html5 as H
import qualified Text.Blaze.Html5.Attributes as A

import Lichen.Util
import Lichen.Config.Plagiarism
import Lichen.Plagiarism.Render
import Lichen.Plagiarism.Render.PathGenerators

renderEntry :: Show a => Config -> (Double, (b, a), (b, a)) -> H.Html
renderEntry config (match, (_, x), (_, y)) = H.tr (H.td (H.a ! A.href (H.stringValue (pathBase config) <> runPathGenerator (pathGenerator config) (sq x) (sq y)) $ hs match) <> H.td (hs x) <> H.td (hs y))

renderTable :: Show a => Config -> [(Double, (b, a), (b, a))] -> H.Html
renderTable config t = H.table ! A.class_ "table" $ mconcat
    [ H.div ! A.class_ "container" $ mconcat
        [ H.h1 ! A.class_ "centered" $ "Plagiarism Detection Results"
        , H.div ! A.class_ "row" $ mconcat
            [ H.tr (H.td "Match" <> H.td "Student A" <> H.td "Student B")
            , traverse_ (renderEntry config) t
            ]
        ]
    ]
