void fun()
{
  int entity_3 = 65;
  int entity_2 = 67;
  char entity_1[37] = "";
  entity_1 = NULL;
  char entity_6[55] = "";
  entity_6 = NULL;
  memset(entity_1, 'j', 37-1);
  entity_1[37-1]='';
  memset(entity_6, 'j', 55-1);
  entity_6[55-1]='';
  entity_6[entity_2] = 'G';
}