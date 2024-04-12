void fun()
{
  char entity_5[34] = "";
  entity_5 = NULL;
  char entity_9[56] = "";
  entity_9 = NULL;
  memset(entity_9, 'n', 56-1);
  entity_9[56-1]='';
  memset(entity_5, 'w', 34-1);
  entity_5[34-1]='';
  entity_9[53] = 'r';
}