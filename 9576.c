void fun()
{
  int entity_7 = 36;
  char entity_4[32] = "";
  entity_4 = NULL;
  char entity_9[86] = "";
  entity_9 = NULL;
  char entity_3 = 'G';
  memset(entity_4, 'V', 32-1);
  entity_4[32-1]='';
  memset(entity_9, 'w', 86-1);
  entity_9[86-1]='';
  entity_7 = 55;
  entity_4[entity_7] = 'X';
}