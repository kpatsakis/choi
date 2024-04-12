void fun()
{
  int entity_8 = 45;
  char entity_9[entity_8] = "";
  entity_9 = NULL;
  char* entity_4;
  memset(entity_9, 'h', entity_8-1);
  entity_9[entity_8-1]='';
  entity_4 = (char*)malloc(96*sizeof(char));
  entity_4[96-1]='';
  entity_8 = 90;
  strcpy(entity_4, entity_9);
}