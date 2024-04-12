void fun()
{
  int entity_8 = 54;
  char entity_9[25] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'Z', 25-1);
  entity_9[25-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  strcpy(entity_7, entity_9);
}