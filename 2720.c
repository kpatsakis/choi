void fun()
{
  int entity_1 = 33;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  memset(entity_0, 'r', entity_1-1);
  entity_0[entity_1-1]='';
  entity_0[24] = 'k';
}