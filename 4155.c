void fun()
{
  int entity_0 = 37;
  char entity_4 = 'a';
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char* entity_6;
  memset(entity_1, 'a', entity_0-1);
  entity_1[entity_0-1]='';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  strcpy(entity_6, entity_1);
}