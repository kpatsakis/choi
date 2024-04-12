void fun()
{
  int entity_3 = 3;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  char entity_0 = 'I';
  memset(entity_6, 'k', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[92] = 'b';
}