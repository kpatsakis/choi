void fun()
{
  int entity_9 = 30;
  int entity_7 = 88;
  char entity_8 = 'E';
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_1;
  memset(entity_6, 'N', entity_7-1);
  entity_6[entity_7-1]='';
  entity_1 = (char*)malloc(13*sizeof(char));
  entity_1[13-1]='';
  strcpy(entity_1, entity_6);
}