void fun()
{
  int entity_1 = 76;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'p', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[28] = 'g';
}