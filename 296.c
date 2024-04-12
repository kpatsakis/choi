void fun()
{
  char entity_5[33] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', 33-1);
  entity_5[33-1]='';
  entity_5[13] = 'Q';
}