void fun()
{
  int entity_9 = 66;
  char entity_7[2] = "";
  entity_7 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[entity_9-1]='';
  memset(entity_7, 'K', 2-1);
  entity_7[2-1]='';
  strcpy(entity_3, entity_7);
}