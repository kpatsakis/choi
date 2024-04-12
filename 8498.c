void fun()
{
  int entity_4 = 76;
  char entity_2[entity_4] = "";
  entity_2 = NULL;
  memset(entity_2, 'C', entity_4-1);
  entity_2[entity_4-1]='';
  entity_2[24] = 'T';
}