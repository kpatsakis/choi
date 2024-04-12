void fun()
{
  int entity_1 = 92;
  int entity_9 = 10;
  int entity_3 = 41;
  entity_3 = 81;
  char entity_7[83] = "";
  entity_7 = NULL;
  char entity_8[41] = "";
  entity_8 = NULL;
  memset(entity_8, 't', 41-1);
  entity_8[41-1]='';
  memset(entity_7, 'J', 83-1);
  entity_7[83-1]='';
  entity_8[entity_3] = 'Z';
}