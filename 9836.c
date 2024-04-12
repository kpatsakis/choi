void fun()
{
  int entity_0 = 1;
  int entity_9 = 89;
  char entity_4 = 'V';
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'C', entity_0-1);
  entity_1[entity_0-1]='';
  entity_8 = (char*)malloc(59*sizeof(char));
  entity_8[59-1]='';
  entity_0 = 53;
  strcpy(entity_8, entity_1);
}