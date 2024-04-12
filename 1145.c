void fun()
{
  int entity_9 = 2;
  char entity_8[9] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'b', 9-1);
  entity_8[9-1]='';
  entity_6 = (char*)malloc(entity_9*sizeof(char));
  entity_6[entity_9-1]='';
  strcpy(entity_6, entity_8);
}