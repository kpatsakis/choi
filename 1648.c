void fun()
{
  int entity_0 = 20;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', entity_0-1);
  entity_2[entity_0-1]='';
  entity_0 = 73;
  entity_2[28] = 'A';
}