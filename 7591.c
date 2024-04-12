void fun()
{
  int entity_5 = 40;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 'Y', entity_5-1);
  entity_1[entity_5-1]='';
  entity_1[83] = 'i';
}