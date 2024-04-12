void fun()
{
  int entity_6 = 96;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_4, 'R', entity_6-1);
  entity_4[entity_6-1]='';
  entity_6 = 88;
  entity_4[96] = 'x';
}