void fun()
{
  int entity_9 = 5;
  char* entity_5;
  char entity_8[93] = "";
  entity_8 = NULL;
  memset(entity_8, 'R', 93-1);
  entity_8[93-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  strcpy(entity_5, entity_8);
}