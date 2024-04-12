void fun()
{
  int entity_8 = 60;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[4] = 'T';
}