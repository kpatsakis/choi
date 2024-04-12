void fun()
{
  int entity_5 = 85;
  entity_5 = 84;
  char entity_8[43] = "";
  entity_8 = NULL;
  char* entity_9;
  memset(entity_8, 'O', 43-1);
  entity_8[43-1]='';
  entity_9 = (char*)malloc(entity_5*sizeof(char));
  entity_9[entity_5-1]='';
  strcpy(entity_9, entity_8);
}