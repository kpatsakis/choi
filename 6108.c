void fun()
{
  char entity_7[98] = "";
  entity_7 = NULL;
  char entity_1[60] = "";
  entity_1 = NULL;
  char entity_5[54] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', 54-1);
  entity_5[54-1]='';
  memset(entity_7, 'U', 98-1);
  entity_7[98-1]='';
  memset(entity_1, 'a', 60-1);
  entity_1[60-1]='';
  entity_1[89] = 'w';
}