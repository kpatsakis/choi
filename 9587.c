void fun()
{
  int entity_6 = 15;
  int entity_8 = 22;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'N', entity_8-1);
  entity_2[entity_8-1]='';
  entity_8 = 99;
  entity_2[23] = 'T';
}