void fun()
{
  int entity_8 = 74;
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', entity_8-1);
  entity_3[entity_8-1]='';
  entity_3[25] = 'i';
}