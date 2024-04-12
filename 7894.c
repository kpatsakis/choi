void fun()
{
  int entity_1 = 89;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_1-1);
  entity_2[entity_1-1]='';
  entity_2[23] = 'd';
}