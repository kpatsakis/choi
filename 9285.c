void fun()
{
  int entity_2 = 54;
  char entity_9 = 'd';
  char entity_8[56] = "";
  entity_8 = NULL;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  memset(entity_8, 'x', 56-1);
  entity_8[56-1]='';
  memset(entity_7, 'V', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 68;
  entity_7[91] = 'F';
}