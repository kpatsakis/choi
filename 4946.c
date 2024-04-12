void fun()
{
  char entity_6[38] = "";
  entity_6 = NULL;
  char entity_4[4] = "";
  entity_4 = NULL;
  memset(entity_6, 'q', 38-1);
  entity_6[38-1]='';
  memset(entity_4, 'A', 4-1);
  entity_4[4-1]='';
  entity_6[77] = 'Y';
}