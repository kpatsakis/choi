void fun()
{
  int entity_3 = 8;
  char* entity_4;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'q', entity_3-1);
  entity_6[entity_3-1]='';
  entity_4 = (char*)malloc(81*sizeof(char));
  entity_4[81-1]='';
  strcpy(entity_4, entity_6);
}