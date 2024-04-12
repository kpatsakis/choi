void fun()
{
  int entity_8 = 72;
  char* entity_7;
  char entity_2[49] = "";
  entity_2 = NULL;
  char* entity_9;
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_9 = (char*)malloc(21*sizeof(char));
  entity_9[21-1]='';
  memset(entity_2, 'K', 49-1);
  entity_2[49-1]='';
  strcpy(entity_7, entity_2);
}