void fun()
{
  int entity_2 = 41;
  char entity_6[20] = "";
  entity_6 = NULL;
  char entity_9 = 'q';
  char entity_4[31] = "";
  entity_4 = NULL;
  memset(entity_6, 'X', 20-1);
  entity_6[20-1]='';
  memset(entity_4, 'q', 31-1);
  entity_4[31-1]='';
  entity_2 = 63;
  entity_4[entity_2] = 'm';
}