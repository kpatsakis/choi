void fun()
{
  int entity_8 = 99;
  char* entity_6;
  char entity_0 = 'r';
  char entity_9[62] = "";
  entity_9 = NULL;
  memset(entity_9, 'J', 62-1);
  entity_9[62-1]='';
  entity_6 = (char*)malloc(entity_8*sizeof(char));
  entity_6[entity_8-1]='';
  strcpy(entity_6, entity_9);
}