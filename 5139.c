void fun()
{
  int entity_2 = 18;
  char* entity_4;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'j', entity_2-1);
  entity_9[entity_2-1]='';
  entity_4 = (char*)malloc(33*sizeof(char));
  entity_4[33-1]='';
  strcpy(entity_4, entity_9);
}