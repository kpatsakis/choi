void fun()
{
  int entity_9 = 16;
  char entity_5[35] = "";
  entity_5 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  memset(entity_5, 'L', 35-1);
  entity_5[35-1]='';
  strcpy(entity_6, entity_5);
}