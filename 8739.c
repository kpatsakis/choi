void fun()
{
  int entity_6 = 64;
  int entity_8 = 53;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char* entity_9;
  memset(entity_4, 'e', entity_8-1);
  entity_4[entity_8-1]='';
  entity_9 = (char*)malloc(16*sizeof(char));
  entity_9[16-1]='';
  strcpy(entity_9, entity_4);
}