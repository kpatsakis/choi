void fun()
{
  int entity_8 = 85;
  char entity_6[67] = "";
  entity_6 = NULL;
  char entity_4 = 'Z';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  memset(entity_3, 'D', entity_8-1);
  entity_3[entity_8-1]='';
  memset(entity_6, 'G', 67-1);
  entity_6[67-1]='';
  entity_3[71] = 'u';
}