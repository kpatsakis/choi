void fun()
{
  int entity_1 = 51;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  memset(entity_3, 'U', entity_1-1);
  entity_3[entity_1-1]='';
  entity_3[10] = 'U';
}