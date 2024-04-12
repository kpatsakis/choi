void fun()
{
  int entity_3 = 4;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  memset(entity_8, 'Z', entity_3-1);
  entity_8[entity_3-1]='';
  entity_8[75] = 's';
}