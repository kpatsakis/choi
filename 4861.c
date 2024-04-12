void fun()
{
  int entity_7 = 55;
  int entity_2 = 4;
  entity_2 = 91;
  char entity_6[21] = "";
  entity_6 = NULL;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_6, 'T', 21-1);
  entity_6[21-1]='';
  memset(entity_3, 'l', entity_2-1);
  entity_3[entity_2-1]='';
  entity_3[79] = 'r';
}