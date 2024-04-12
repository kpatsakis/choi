void fun()
{
  int entity_7 = 20;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_8;
  char* entity_9;
  memset(entity_0, 'J', entity_7-1);
  entity_0[entity_7-1]='';
  entity_8 = (char*)malloc(42*sizeof(char));
  entity_8[42-1]='';
  entity_9 = (char*)malloc(23*sizeof(char));
  entity_9[23-1]='';
  entity_7 = 3;
  strcpy(entity_9, entity_0);
}