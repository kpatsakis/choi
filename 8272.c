void fun()
{
  int entity_1 = 52;
  char entity_0[54] = "";
  entity_0 = NULL;
  memset(entity_0, 'F', 54-1);
  entity_0[54-1]='';
  entity_1 = 15;
  entity_0[entity_1] = 'o';
}