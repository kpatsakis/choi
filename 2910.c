void fun()
{
  int entity_9 = 68;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_8;
  memset(entity_4, 'E', entity_9-1);
  entity_4[entity_9-1]='';
  entity_8 = (char*)malloc(2*sizeof(char));
  entity_8[2-1]='';
  strcpy(entity_8, entity_4);
}