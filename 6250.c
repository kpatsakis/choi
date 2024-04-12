void fun()
{
  int entity_6 = 2;
  entity_6 = 25;
  char entity_9[48] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_9, 'H', 48-1);
  entity_9[48-1]='';
  strcpy(entity_8, entity_9);
}