void fun()
{
  int entity_8 = 70;
  entity_8 = 83;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 't', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[54] = 'E';
}