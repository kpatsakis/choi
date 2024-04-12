void fun()
{
  int entity_2 = 3;
  char* entity_3;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(24*sizeof(char));
  entity_5[24-1]='';
  memset(entity_9, 'X', entity_2-1);
  entity_9[entity_2-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  entity_2 = 41;
  strcpy(entity_3, entity_9);
}