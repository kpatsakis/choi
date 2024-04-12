void fun()
{
  int entity_6 = 22;
  char* entity_8;
  char entity_9[1] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(58*sizeof(char));
  entity_8[58-1]='';
  memset(entity_9, 'R', 1-1);
  entity_9[1-1]='';
  strcpy(entity_8, entity_9);
}