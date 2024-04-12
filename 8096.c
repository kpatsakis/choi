void fun()
{
  char entity_5[25] = "";
  entity_5 = NULL;
  memset(entity_5, 'm', 25-1);
  entity_5[25-1]='';
  entity_5[69] = 'Q';
}