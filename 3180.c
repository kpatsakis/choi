void fun()
{
  int entity_8 = 56;
  int entity_9 = 54;
  char* entity_7;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_3 = 't';
  memset(entity_4, 'P', entity_8-1);
  entity_4[entity_8-1]='';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  strcpy(entity_7, entity_4);
}