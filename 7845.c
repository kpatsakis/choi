void fun()
{
  int entity_9 = 98;
  char entity_5[43] = "";
  entity_5 = NULL;
  char* entity_2;
  char* entity_7;
  char entity_0 = 'V';
  memset(entity_5, 'x', 43-1);
  entity_5[43-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  strcpy(entity_7, entity_5);
}