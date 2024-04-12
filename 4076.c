void fun()
{
  int entity_5 = 23;
  char entity_6 = 'T';
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', entity_5-1);
  entity_4[entity_5-1]='';
  entity_4[1] = 'd';
}