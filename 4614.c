void fun()
{
  int entity_7 = 51;
  int entity_9 = 72;
  char* entity_8;
  char entity_6[81] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_6, 'a', 81-1);
  entity_6[81-1]='';
  entity_9 = 44;
  strcpy(entity_8, entity_6);
}