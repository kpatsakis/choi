void fun()
{
  char entity_4[67] = "";
  entity_4 = NULL;
  char entity_1[12] = "";
  entity_1 = NULL;
  memset(entity_4, 'm', 67-1);
  entity_4[67-1]='';
  memset(entity_1, 'h', 12-1);
  entity_1[12-1]='';
  entity_4[20] = 'h';
}