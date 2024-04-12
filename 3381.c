void fun()
{
  int entity_7 = 27;
  int entity_9 = 4;
  int entity_5 = 26;
  char entity_6[35] = "";
  entity_6 = NULL;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_6, 'p', 35-1);
  entity_6[35-1]='';
  memset(entity_1, 'v', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[33] = 'O';
}