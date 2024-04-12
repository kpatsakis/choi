void fun()
{
  int entity_0 = 99;
  entity_0 = 55;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', entity_0-1);
  entity_3[entity_0-1]='';
  entity_3[89] = 'e';
}