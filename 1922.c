void fun()
{
  int entity_0 = 25;
  char entity_8[entity_0] = "";
  entity_8 = NULL;
  memset(entity_8, 'O', entity_0-1);
  entity_8[entity_0-1]='';
  entity_8[92] = 't';
}