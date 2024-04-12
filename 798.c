void fun()
{
  int entity_9 = 6;
  char entity_3[22] = "";
  entity_3 = NULL;
  char entity_1[13] = "";
  entity_1 = NULL;
  memset(entity_3, 'Z', 22-1);
  entity_3[22-1]='';
  memset(entity_1, 'l', 13-1);
  entity_1[13-1]='';
  entity_1[entity_9] = 'b';
}