void fun()
{
  int entity_3 = 26;
  entity_3 = 26;
  char* entity_6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', entity_3-1);
  entity_9[entity_3-1]='';
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[25-1]='';
  strcpy(entity_6, entity_9);
}