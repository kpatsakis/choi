void fun()
{
  int entity_0 = 72;
  entity_0 = 72;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(32*sizeof(char));
  entity_1[32-1]='';
  memset(entity_4, 'f', entity_0-1);
  entity_4[entity_0-1]='';
  strcpy(entity_1, entity_4);
}