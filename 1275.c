void fun()
{
  int entity_8 = 88;
  char entity_9[31] = "";
  entity_9 = NULL;
  char entity_7[94] = "";
  entity_7 = NULL;
  memset(entity_9, 'a', 31-1);
  entity_9[31-1]='';
  memset(entity_7, 'z', 94-1);
  entity_7[94-1]='';
  entity_8 = 26;
  entity_9[entity_8] = 'k';
}