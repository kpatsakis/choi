void fun()
{
  int entity_1 = 7;
  char* entity_7;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[19-1]='';
  memset(entity_6, 'q', entity_1-1);
  entity_6[entity_1-1]='';
  strcpy(entity_7, entity_6);
}