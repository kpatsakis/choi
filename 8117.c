void fun()
{
  int entity_1 = 33;
  char entity_4[86] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_9;
  entity_9 = (char*)malloc(78*sizeof(char));
  entity_9[78-1]='';
  memset(entity_4, 'E', 86-1);
  entity_4[86-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  strcpy(entity_6, entity_4);
}