void fun()
{
  int entity_4 = 78;
  entity_4 = 19;
  char entity_9[34] = "";
  entity_9 = NULL;
  char entity_3 = 'B';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  memset(entity_9, 'l', 34-1);
  entity_9[34-1]='';
  memset(entity_7, 'q', entity_4-1);
  entity_7[entity_4-1]='';
  entity_7[26] = 'd';
}