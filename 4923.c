void fun()
{
  int entity_6 = 3;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  memset(entity_2, 'i', entity_6-1);
  entity_2[entity_6-1]='';
  entity_6 = 27;
  entity_2[5] = 'D';
}