void fun()
{
  int entity_9 = 53;
  char* entity_2;
  char* entity_6;
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  entity_6 = (char*)malloc(4*sizeof(char));
  entity_6[4-1]='';
  entity_2 = (char*)malloc(25*sizeof(char));
  entity_2[25-1]='';
  memset(entity_1, 'S', entity_9-1);
  entity_1[entity_9-1]='';
  strcpy(entity_2, entity_1);
}