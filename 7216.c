void fun()
{
  int entity_2 = 91;
  char* entity_7;
  char entity_9[37] = "";
  entity_9 = NULL;
  char entity_1[37] = "";
  entity_1 = NULL;
  memset(entity_9, 'E', 37-1);
  entity_9[37-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_1, 'S', 37-1);
  entity_1[37-1]='';
  strcpy(entity_7, entity_9);
}