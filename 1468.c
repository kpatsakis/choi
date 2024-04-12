void fun()
{
  int entity_4 = 51;
  char entity_1[62] = "";
  entity_1 = NULL;
  char entity_9[51] = "";
  entity_9 = NULL;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  char entity_6 = 'r';
  memset(entity_8, 'I', entity_4-1);
  entity_8[entity_4-1]='';
  memset(entity_9, 'J', 51-1);
  entity_9[51-1]='';
  memset(entity_1, 'N', 62-1);
  entity_1[62-1]='';
  entity_4 = 41;
  entity_8[69] = 'H';
}