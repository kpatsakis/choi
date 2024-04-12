void fun()
{
  int entity_2 = 60;
  entity_2 = 56;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', entity_2-1);
  entity_4[entity_2-1]='';
  entity_4[39] = 'N';
}