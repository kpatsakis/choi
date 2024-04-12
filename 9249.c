void fun()
{
  char entity_5[55] = "";
  entity_5 = NULL;
  char entity_1[15] = "";
  entity_1 = NULL;
  memset(entity_5, 'd', 55-1);
  entity_5[55-1]='';
  memset(entity_1, 'l', 15-1);
  entity_1[15-1]='';
  entity_5[3] = 'Q';
}