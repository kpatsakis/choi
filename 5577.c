void fun()
{
  int entity_6 = 30;
  int entity_8 = 67;
  char* entity_4;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_1 = 'Z';
  memset(entity_9, 'e', entity_6-1);
  entity_9[entity_6-1]='';
  entity_4 = (char*)malloc(43*sizeof(char));
  entity_4[43-1]='';
  entity_6 = 51;
  strcpy(entity_4, entity_9);
}