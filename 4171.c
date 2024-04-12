void fun()
{
  int entity_7 = 27;
  char* entity_4;
  char entity_1[35] = "";
  entity_1 = NULL;
  char entity_6 = 'L';
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_1, 'O', 35-1);
  entity_1[35-1]='';
  strcpy(entity_4, entity_1);
}