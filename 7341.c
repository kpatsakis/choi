void fun()
{
  int entity_5 = 96;
  entity_5 = 67;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'i', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[89] = 'v';
}