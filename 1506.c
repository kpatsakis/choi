void fun()
{
  int entity_5 = 53;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char* entity_9;
  memset(entity_3, 'Z', entity_5-1);
  entity_3[entity_5-1]='';
  entity_9 = (char*)malloc(85*sizeof(char));
  entity_9[85-1]='';
  entity_5 = 62;
  strcpy(entity_9, entity_3);
}