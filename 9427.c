void fun()
{
  int entity_9 = 25;
  char entity_1 = 'V';
  char* entity_6;
  char entity_2[44] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 44-1);
  entity_2[44-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  entity_9 = 69;
  strcpy(entity_6, entity_2);
}