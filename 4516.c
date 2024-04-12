void fun()
{
  int entity_4 = 58;
  entity_4 = 82;
  char entity_8[entity_4] = "";
  entity_8 = NULL;
  memset(entity_8, 'v', entity_4-1);
  entity_8[entity_4-1]='';
  entity_8[75] = 'c';
}