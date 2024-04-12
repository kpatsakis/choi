void fun()
{
  int entity_4 = 67;
  int entity_5 = 67;
  int entity_8 = 79;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_2[6] = "";
  entity_2 = NULL;
  memset(entity_2, 'D', 6-1);
  entity_2[6-1]='';
  memset(entity_1, 'l', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 78;
  entity_1[20] = 'm';
}