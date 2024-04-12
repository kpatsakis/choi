void fun()
{
  int entity_5 = 91;
  entity_5 = 26;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'F', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[48] = 'c';
}