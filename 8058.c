void fun()
{
  int entity_8 = 88;
  entity_8 = 88;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[12-1]='';
  memset(entity_9, 'R', entity_8-1);
  entity_9[entity_8-1]='';
  strcpy(entity_3, entity_9);
}