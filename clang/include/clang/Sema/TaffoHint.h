//TAFFO custom code
// is this correct?
#ifndef LLVM_CLANG_SEMA_TAFFOHINT_H
#define LLVM_CLANG_SEMA_TAFFOHINT_H

#include "clang/Basic/IdentifierTable.h"
#include "clang/Basic/SourceLocation.h"
#include "clang/Sema/ParsedAttr.h"
#include "clang/Sema/Ownership.h"

namespace clang {
struct TaffoHint {
  SourceRange Range;
  IdentifierLoc *PragmaNameLoc; // name of the pragma
  IdentifierLoc *OptionLoc; //target option we are applying
  Expr *ValueExprV; //nome of the variable
  Expr *ValueExpr;

  TaffoHint()
      : PragmaNameLoc(nullptr), OptionLoc(nullptr), 
      ValueExprV(nullptr), ValueExpr(nullptr) {}
};

}
#endif // LLVM_CLANG_SEMA_TAFFOHINT_H
