void fun()
{
  int entity_4 = 38;
  char entity_9[94] = "";
  entity_9 = NULL;
  char entity_8[57] = "";
  entity_8 = NULL;
  memset(entity_9, 'Z', 94-1);
  entity_9[94-1]='';
  memset(entity_8, 'V', 57-1);
  entity_8[57-1]='';
  entity_8[entity_4] = 'X';
}