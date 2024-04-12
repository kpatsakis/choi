void fun()
{
  int entity_6 = 76;
  char* entity_9;
  char entity_2 = 'L';
  char* entity_8;
  char entity_1[6] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(75*sizeof(char));
  entity_8[75-1]='';
  memset(entity_1, 'd', 6-1);
  entity_1[6-1]='';
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  strcpy(entity_9, entity_1);
}