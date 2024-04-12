void fun()
{
  int entity_7 = 6;
  int entity_0 = 17;
  char* entity_8;
  char entity_4 = 'j';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'A', entity_0-1);
  entity_9[entity_0-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  strcpy(entity_8, entity_9);
}