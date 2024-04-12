void fun()
{
  char entity_8[35] = "";
  entity_8 = NULL;
  char entity_1[20] = "";
  entity_1 = NULL;
  char entity_3[40] = "";
  entity_3 = NULL;
  memset(entity_1, 'Z', 20-1);
  entity_1[20-1]='';
  memset(entity_3, 'b', 40-1);
  entity_3[40-1]='';
  memset(entity_8, 'j', 35-1);
  entity_8[35-1]='';
  entity_8[23] = 'L';
}