void fun()
{
  int entity_1 = 91;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'F', entity_1-1);
  entity_0[entity_1-1]='';
  entity_1 = 6;
  entity_0[51] = 'H';
}