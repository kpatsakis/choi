void fun()
{
  int entity_0 = 41;
  entity_0 = 23;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'I', entity_0-1);
  entity_8[entity_0-1]='';
  entity_8[32] = 'k';
}