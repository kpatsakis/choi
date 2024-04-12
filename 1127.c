void fun()
{
  int entity_9 = 79;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_6;
  memset(entity_8, 'X', entity_9-1);
  entity_8[entity_9-1]='';
  entity_6 = (char*)malloc(78*sizeof(char));
  entity_6[78-1]='';
  strcpy(entity_6, entity_8);
}