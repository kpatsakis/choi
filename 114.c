void fun()
{
  int entity_0 = 84;
  int entity_8 = 89;
  char* entity_6;
  char entity_4[entity_8] = "";
  entity_4 = NULL;
  char entity_2 = 'w';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[49-1]='';
  memset(entity_4, 'q', entity_8-1);
  entity_4[entity_8-1]='';
  strcpy(entity_6, entity_4);
}