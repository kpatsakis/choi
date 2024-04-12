void fun()
{
  int entity_5 = 64;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  memset(entity_1, 's', entity_5-1);
  entity_1[entity_5-1]='';
  entity_5 = 56;
  entity_1[21] = 't';
}