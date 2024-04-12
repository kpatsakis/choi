void fun()
{
  int entity_3 = 56;
  entity_3 = 9;
  char entity_4[entity_3] = "";
  entity_4 = NULL;
  memset(entity_4, 'G', entity_3-1);
  entity_4[entity_3-1]='';
  entity_4[87] = 'o';
}