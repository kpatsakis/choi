void fun()
{
  int entity_8 = 32;
  entity_8 = 4;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_5, 'G', entity_8-1);
  entity_5[entity_8-1]='';
  entity_5[91] = 'P';
}