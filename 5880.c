void fun()
{
  int entity_4 = 29;
  char entity_8[5] = "";
  entity_8 = NULL;
  char entity_9[41] = "";
  entity_9 = NULL;
  char entity_5 = 'X';
  memset(entity_8, 'n', 5-1);
  entity_8[5-1]='';
  memset(entity_9, 'Z', 41-1);
  entity_9[41-1]='';
  entity_9[entity_4] = 'a';
}