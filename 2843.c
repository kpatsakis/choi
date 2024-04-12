void fun()
{
  int entity_1 = 79;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(18*sizeof(char));
  entity_9[18-1]='';
  memset(entity_4, 'z', entity_1-1);
  entity_4[entity_1-1]='';
  strcpy(entity_9, entity_4);
}