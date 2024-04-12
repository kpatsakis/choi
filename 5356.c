void fun()
{
  int entity_9 = 8;
  char* entity_3;
  char entity_7[81] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', 81-1);
  entity_7[81-1]='';
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  strcpy(entity_3, entity_7);
}