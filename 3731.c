void fun()
{
  int entity_0 = 41;
  char entity_2[67] = "";
  entity_2 = NULL;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  memset(entity_2, 'v', 67-1);
  entity_2[67-1]='';
  memset(entity_6, 'R', entity_0-1);
  entity_6[entity_0-1]='';
  entity_6[47] = 'F';
}