void fun()
{
  int entity_5 = 5;
  int entity_8 = 66;
  entity_8 = 79;
  char* entity_0;
  char entity_9[34] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  memset(entity_9, 'a', 34-1);
  entity_9[34-1]='';
  entity_3 = (char*)malloc(entity_8*sizeof(char));
  entity_3[entity_8-1]='';
  strcpy(entity_3, entity_9);
}