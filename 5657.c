void fun()
{
  int entity_7 = 3;
  int entity_2 = 13;
  entity_7 = 5;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  memset(entity_0, 'z', entity_7-1);
  entity_0[entity_7-1]='';
  entity_0[93] = 'A';
}