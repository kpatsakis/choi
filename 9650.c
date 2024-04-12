void fun()
{
  int entity_4 = 15;
  int entity_1 = 27;
  entity_1 = 27;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_8[62] = "";
  entity_8 = NULL;
  memset(entity_8, 'p', 62-1);
  entity_8[62-1]='';
  memset(entity_9, 'm', entity_1-1);
  entity_9[entity_1-1]='';
  entity_2 = (char*)malloc(79*sizeof(char));
  entity_2[79-1]='';
  strcpy(entity_2, entity_9);
}