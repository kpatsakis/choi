void fun()
{
  int entity_1 = 18;
  entity_1 = 62;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'R', entity_1-1);
  entity_4[entity_1-1]='';
  entity_4[32] = 'f';
}