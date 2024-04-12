void fun()
{
  int entity_5 = 17;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  char entity_3[76] = "";
  entity_3 = NULL;
  memset(entity_2, 's', entity_5-1);
  entity_2[entity_5-1]='';
  memset(entity_3, 'H', 76-1);
  entity_3[76-1]='';
  entity_2[96] = 'G';
}