void fun()
{
  int entity_5 = 77;
  char entity_9[79] = "";
  entity_9 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memset(entity_9, 'z', 79-1);
  entity_9[79-1]='';
  strcpy(entity_4, entity_9);
}