void fun()
{
  int entity_5 = 6;
  entity_5 = 22;
  char entity_0 = 'x';
  char entity_8[entity_5] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', entity_5-1);
  entity_8[entity_5-1]='';
  entity_8[35] = 'r';
}