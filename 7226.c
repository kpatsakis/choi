void fun()
{
  int entity_0 = 66;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  memset(entity_4, 'a', entity_0-1);
  entity_4[entity_0-1]='';
  entity_4[92] = 'c';
}