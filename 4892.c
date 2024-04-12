void fun()
{
  int entity_9 = 41;
  int entity_2 = 39;
  int entity_5 = 4;
  char entity_3[22] = "";
  entity_3 = NULL;
  memset(entity_3, 'j', 22-1);
  entity_3[22-1]='';
  entity_3[entity_2] = 'Z';
}