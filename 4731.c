void fun()
{
  int entity_0 = 70;
  entity_0 = 62;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  char entity_3[4] = "";
  entity_3 = NULL;
  memset(entity_2, 'C', entity_0-1);
  entity_2[entity_0-1]='';
  memset(entity_3, 'i', 4-1);
  entity_3[4-1]='';
  entity_2[25] = 'g';
}