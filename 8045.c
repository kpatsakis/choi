void fun()
{
  int entity_9 = 84;
  char entity_1 = 'S';
  char* entity_2;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[75-1]='';
  memset(entity_0, 'S', entity_9-1);
  entity_0[entity_9-1]='';
  entity_2 = (char*)malloc(39*sizeof(char));
  entity_2[39-1]='';
  strcpy(entity_6, entity_0);
}