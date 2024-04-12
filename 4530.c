void fun()
{
  int entity_9 = 71;
  char entity_1[35] = "";
  entity_1 = NULL;
  char* entity_3;
  char entity_8 = 'L';
  memset(entity_1, 'D', 35-1);
  entity_1[35-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_1);
}