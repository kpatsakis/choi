void fun()
{
  int entity_1 = 100;
  char entity_6 = 's';
  char entity_2 = 'L';
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'O', entity_1-1);
  entity_0[entity_1-1]='';
  entity_9 = (char*)malloc(86*sizeof(char));
  entity_9[86-1]='';
  entity_1 = 36;
  strcpy(entity_9, entity_0);
}