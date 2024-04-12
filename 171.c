void fun()
{
  int entity_9 = 68;
  char* entity_7;
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char entity_4[30] = "";
  entity_4 = NULL;
  memset(entity_2, 'U', entity_9-1);
  entity_2[entity_9-1]='';
  memset(entity_4, 'Z', 30-1);
  entity_4[30-1]='';
  entity_7 = (char*)malloc(14*sizeof(char));
  entity_7[14-1]='';
  strcpy(entity_7, entity_2);
}