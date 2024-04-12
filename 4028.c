void fun()
{
  int entity_2 = 72;
  int entity_8 = 60;
  char* entity_6;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  entity_6 = (char*)malloc(72*sizeof(char));
  entity_6[72-1]='';
  memset(entity_9, 'p', entity_2-1);
  entity_9[entity_2-1]='';
  strcpy(entity_6, entity_9);
}