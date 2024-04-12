void fun()
{
  int entity_0 = 17;
  entity_0 = 76;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  memset(entity_5, 'q', entity_0-1);
  entity_5[entity_0-1]='';
  entity_5[59] = 'X';
}