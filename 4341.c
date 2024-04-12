void fun()
{
  int entity_9 = 26;
  char entity_1[84] = "";
  entity_1 = NULL;
  memset(entity_1, 't', 84-1);
  entity_1[84-1]='';
  entity_1[entity_9] = 'u';
}