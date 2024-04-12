void fun()
{
  int entity_4 = 43;
  entity_4 = 79;
  char entity_6[35] = "";
  entity_6 = NULL;
  char entity_9[15] = "";
  entity_9 = NULL;
  memset(entity_6, 'z', 35-1);
  entity_6[35-1]='';
  memset(entity_9, 'm', 15-1);
  entity_9[15-1]='';
  entity_9[entity_4] = 'd';
}