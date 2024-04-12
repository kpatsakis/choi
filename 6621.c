void fun()
{
  int entity_5 = 91;
  entity_5 = 61;
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[85] = 'x';
}