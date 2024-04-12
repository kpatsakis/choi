void fun()
{
  int entity_7 = 53;
  int entity_5 = 3;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[51] = 'j';
}