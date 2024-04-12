void fun()
{
  char entity_4[43] = "";
  entity_4 = NULL;
  char entity_5[58] = "";
  entity_5 = NULL;
  memset(entity_4, 'A', 43-1);
  entity_4[43-1]='';
  memset(entity_5, 'w', 58-1);
  entity_5[58-1]='';
  entity_5[15] = 'm';
}