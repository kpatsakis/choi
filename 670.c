void fun()
{
  int entity_3 = 30;
  char entity_6[2] = "";
  entity_6 = NULL;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char entity_2[84] = "";
  entity_2 = NULL;
  memset(entity_8, 's', entity_3-1);
  entity_8[entity_3-1]='';
  memset(entity_2, 'o', 84-1);
  entity_2[84-1]='';
  memset(entity_6, 'm', 2-1);
  entity_6[2-1]='';
  entity_8[66] = 'L';
}