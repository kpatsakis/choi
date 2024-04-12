void fun()
{
  int entity_3 = 82;
  char entity_5 = 'L';
  char entity_2 = 'V';
  char entity_7[45] = "";
  entity_7 = NULL;
  char* entity_6;
  char entity_4[45] = "";
  entity_4 = NULL;
  memset(entity_4, 'J', 45-1);
  entity_4[45-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_7, 'x', 45-1);
  entity_7[45-1]='';
  entity_3 = 14;
  memcpy(entity_6, entity_7, 45*sizeof(char));
}