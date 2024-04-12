void fun()
{
  int entity_1 = 22;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_0;
  memset(entity_6, 'k', entity_1-1);
  entity_6[entity_1-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  entity_1 = 4;
  strcpy(entity_0, entity_6);
}