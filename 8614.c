void fun()
{
  int entity_0 = 86;
  entity_0 = 49;
  char entity_4 = 'L';
  char* entity_1;
  char entity_3[45] = "";
  entity_3 = NULL;
  memset(entity_3, 'y', 45-1);
  entity_3[45-1]='';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[entity_0-1]='';
  memcpy(entity_1, entity_3, 45*sizeof(char));
}