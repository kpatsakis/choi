void fun()
{
  int entity_3 = 12;
  int entity_1 = 6;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'L', entity_3-1);
  entity_9[entity_3-1]='';
  entity_7 = (char*)malloc(20*sizeof(char));
  entity_7[20-1]='';
  entity_3 = 62;
  strcpy(entity_7, entity_9);
}