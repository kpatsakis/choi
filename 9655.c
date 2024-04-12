void fun()
{
  int entity_2 = 51;
  entity_2 = 31;
  char entity_4[40] = "";
  entity_4 = NULL;
  char entity_9[17] = "";
  entity_9 = NULL;
  memset(entity_4, 'Z', 40-1);
  entity_4[40-1]='';
  memset(entity_9, 'r', 17-1);
  entity_9[17-1]='';
  entity_9[entity_2] = 'm';
}