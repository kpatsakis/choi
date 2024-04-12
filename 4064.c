void fun()
{
  int entity_0 = 40;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'P', entity_0-1);
  entity_2[entity_0-1]='';
  entity_2[76] = 'T';
}