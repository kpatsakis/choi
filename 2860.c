void fun()
{
  int entity_8 = 72;
  int entity_6 = 33;
  char entity_3 = 'f';
  char entity_2[28] = "";
  entity_2 = NULL;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_2, 't', 28-1);
  entity_2[28-1]='';
  memset(entity_1, 'z', entity_6-1);
  entity_1[entity_6-1]='';
  entity_1[21] = 'S';
}