void fun()
{
  int entity_1 = 78;
  entity_1 = 26;
  char entity_8[20] = "";
  entity_8 = NULL;
  char entity_6[16] = "";
  entity_6 = NULL;
  char entity_4[1] = "";
  entity_4 = NULL;
  memset(entity_4, 'y', 1-1);
  entity_4[1-1]='';
  memset(entity_6, 'x', 16-1);
  entity_6[16-1]='';
  memset(entity_8, 'O', 20-1);
  entity_8[20-1]='';
  entity_4[entity_1] = 'T';
}