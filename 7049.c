void fun()
{
  int entity_0 = 34;
  int entity_1 = 18;
  char entity_6[48] = "";
  entity_6 = NULL;
  char entity_2[34] = "";
  entity_2 = NULL;
  char entity_7 = 'P';
  memset(entity_6, 'd', 48-1);
  entity_6[48-1]='';
  memset(entity_2, 's', 34-1);
  entity_2[34-1]='';
  entity_6[entity_1] = 'k';
}