void fun()
{
  int entity_1 = 97;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_5, 'A', entity_1-1);
  entity_5[entity_1-1]='';
  entity_5[15] = 'n';
}