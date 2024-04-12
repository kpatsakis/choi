void fun()
{
  int entity_1 = 3;
  entity_1 = 32;
  char entity_7[30] = "";
  entity_7 = NULL;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'v', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_7, 'i', 30-1);
  entity_7[30-1]='';
  entity_6[29] = 'R';
}