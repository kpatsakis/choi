void fun()
{
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_7[18] = "";
  entity_7 = NULL;
  memset(entity_2, 'x', 67-1);
  entity_2[67-1]='';
  memset(entity_7, 'T', 18-1);
  entity_7[18-1]='';
  entity_2[81] = 'a';
}