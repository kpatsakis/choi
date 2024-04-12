void fun()
{
  int entity_7 = 1;
  char entity_8[47] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'p', 47-1);
  entity_8[47-1]='';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  strcpy(entity_9, entity_8);
}