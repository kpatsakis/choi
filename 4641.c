void fun()
{
  int entity_8 = 53;
  int entity_0 = 77;
  entity_0 = 77;
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', entity_0-1);
  entity_1[entity_0-1]='';
  entity_7 = (char*)malloc(32*sizeof(char));
  entity_7[32-1]='';
  strcpy(entity_7, entity_1);
}