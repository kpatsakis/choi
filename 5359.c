void fun()
{
  int entity_8 = 80;
  char entity_7[57] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'f', 57-1);
  entity_7[57-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  strcpy(entity_9, entity_7);
}