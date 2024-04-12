void fun()
{
  int entity_5 = 66;
  int entity_9 = 26;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_7, 'a', 94-1);
  entity_7[94-1]='';
  entity_5 = 26;
  entity_7[entity_5] = 'd';
}