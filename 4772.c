void fun()
{
  int entity_3 = 70;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  memset(entity_5, 'f', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[74] = 'm';
}