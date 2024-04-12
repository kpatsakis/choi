void fun()
{
  char entity_4[26] = "";
  entity_4 = NULL;
  char entity_9[14] = "";
  entity_9 = NULL;
  memset(entity_9, 'A', 14-1);
  entity_9[14-1]='';
  memset(entity_4, 'k', 26-1);
  entity_4[26-1]='';
  entity_4[1] = 'P';
}