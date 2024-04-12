void fun()
{
  int entity_2 = 15;
  char entity_0[entity_2] = "";
  entity_0 = NULL;
  memset(entity_0, 'z', entity_2-1);
  entity_0[entity_2-1]='';
  entity_2 = 78;
  entity_0[33] = 'a';
}