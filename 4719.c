void fun()
{
  int entity_1 = 51;
  char entity_9[8] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_5 = 'B';
  memset(entity_9, 'p', 8-1);
  entity_9[8-1]='';
  entity_2 = (char*)malloc(entity_1*sizeof(char));
  entity_2[entity_1-1]='';
  strcpy(entity_2, entity_9);
}