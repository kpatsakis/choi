void fun()
{
  int entity_5 = 22;
  char entity_1[22] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', 22-1);
  entity_1[22-1]='';
  entity_5 = 76;
  entity_1[entity_5] = 'n';
}