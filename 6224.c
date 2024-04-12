void fun()
{
  int entity_4 = 18;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_0;
  char* entity_3;
  char entity_1 = 'b';
  memset(entity_9, 'S', entity_4-1);
  entity_9[entity_4-1]='';
  entity_3 = (char*)malloc(5*sizeof(char));
  entity_3[5-1]='';
  entity_0 = (char*)malloc(54*sizeof(char));
  entity_0[54-1]='';
  strcpy(entity_0, entity_9);
}