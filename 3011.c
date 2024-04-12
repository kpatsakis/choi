void fun()
{
  char entity_5[61] = "";
  entity_5 = NULL;
  char entity_1[5] = "";
  entity_1 = NULL;
  memset(entity_5, 'o', 61-1);
  entity_5[61-1]='';
  memset(entity_1, 't', 5-1);
  entity_1[5-1]='';
  entity_1[51] = 'a';
}