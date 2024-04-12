void fun()
{
  int entity_5 = 60;
  char entity_4[95] = "";
  entity_4 = NULL;
  char entity_3 = 'v';
  char* entity_9;
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  memset(entity_4, 'I', 95-1);
  entity_4[95-1]='';
  entity_5 = 33;
  strcpy(entity_9, entity_4);
}