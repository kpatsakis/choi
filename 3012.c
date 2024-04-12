void fun()
{
  int entity_3 = 44;
  int entity_8 = 49;
  entity_8 = 49;
  char entity_1 = 'E';
  char* entity_9;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(11*sizeof(char));
  entity_9[11-1]='';
  memset(entity_6, 'k', entity_8-1);
  entity_6[entity_8-1]='';
  strcpy(entity_9, entity_6);
}