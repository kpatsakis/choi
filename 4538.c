void fun()
{
  int entity_0 = 32;
  char entity_5[entity_0] = "";
  entity_5 = NULL;
  memset(entity_5, 'Q', entity_0-1);
  entity_5[entity_0-1]='';
  entity_0 = 54;
  entity_5[85] = 'k';
}