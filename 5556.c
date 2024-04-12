void fun()
{
  int entity_8 = 6;
  char* entity_9;
  char entity_1[47] = "";
  entity_1 = NULL;
  memset(entity_1, 'l', 47-1);
  entity_1[47-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  strcpy(entity_9, entity_1);
}