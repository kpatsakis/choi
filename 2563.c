void fun()
{
  int entity_3 = 99;
  int entity_8 = 45;
  char* entity_7;
  char* entity_4;
  char entity_9[51] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(42*sizeof(char));
  entity_7[42-1]='';
  memset(entity_9, 'm', 51-1);
  entity_9[51-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  entity_8 = 94;
  strcpy(entity_4, entity_9);
}