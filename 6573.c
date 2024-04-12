void fun()
{
  int entity_6 = 75;
  int entity_8 = 25;
  char entity_3[60] = "";
  entity_3 = NULL;
  char entity_5[47] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', 47-1);
  entity_5[47-1]='';
  memset(entity_3, 'j', 60-1);
  entity_3[60-1]='';
  entity_3[entity_8] = 't';
}