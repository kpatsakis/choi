void fun()
{
  int entity_8 = 43;
  int entity_1 = 21;
  entity_1 = 21;
  char* entity_9;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'i', entity_1-1);
  entity_6[entity_1-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  strcpy(entity_9, entity_6);
}