void fun()
{
  int entity_8 = 79;
  entity_8 = 98;
  char entity_0[entity_8] = "";
  entity_0 = NULL;
  memset(entity_0, 'b', entity_8-1);
  entity_0[entity_8-1]='';
  entity_0[24] = 't';
}