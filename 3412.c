void fun()
{
  char entity_7[13] = "";
  entity_7 = NULL;
  char entity_9[31] = "";
  entity_9 = NULL;
  memset(entity_7, 'Q', 13-1);
  entity_7[13-1]='';
  memset(entity_9, 'y', 31-1);
  entity_9[31-1]='';
  entity_7[23] = 'Q';
}