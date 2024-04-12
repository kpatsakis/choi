void fun()
{
  int entity_0 = 1;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'k', entity_0-1);
  entity_2[entity_0-1]='';
  entity_2[93] = 'e';
}