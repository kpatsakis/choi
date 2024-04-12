void fun()
{
  int entity_2 = 17;
  int entity_5 = 44;
  char entity_7[40] = "";
  entity_7 = NULL;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_1, 'Z', 16-1);
  entity_1[16-1]='';
  memset(entity_7, 'x', 40-1);
  entity_7[40-1]='';
  entity_2 = 7;
  entity_7[entity_2] = 'v';
}