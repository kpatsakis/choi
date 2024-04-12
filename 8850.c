void fun()
{
  int entity_6 = 1;
  int entity_7 = 83;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', entity_6-1);
  entity_2[entity_6-1]='';
  entity_2[9] = 'c';
}