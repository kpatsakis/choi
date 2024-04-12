void fun()
{
  int entity_1 = 60;
  entity_1 = 60;
  char* entity_2;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_0 = 'q';
  memset(entity_9, 'l', entity_1-1);
  entity_9[entity_1-1]='';
  entity_2 = (char*)malloc(74*sizeof(char));
  entity_2[74-1]='';
  strcpy(entity_2, entity_9);
}