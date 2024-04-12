void fun()
{
  int entity_8 = 54;
  char* entity_0;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  char entity_3 = 'L';
  entity_0 = (char*)malloc(36*sizeof(char));
  entity_0[36-1]='';
  memset(entity_5, 'G', entity_8-1);
  entity_5[entity_8-1]='';
  strcpy(entity_0, entity_5);
}