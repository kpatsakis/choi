void fun()
{
  int entity_3 = 85;
  char entity_0 = 'w';
  char entity_5[59] = "";
  entity_5 = NULL;
  char entity_1[16] = "";
  entity_1 = NULL;
  memset(entity_5, 'N', 59-1);
  entity_5[59-1]='';
  memset(entity_1, 'w', 16-1);
  entity_1[16-1]='';
  entity_1[entity_3] = 'v';
}