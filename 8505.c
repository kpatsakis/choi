void fun()
{
  int entity_5 = 7;
  int entity_4 = 33;
  char* entity_8;
  char entity_9[17] = "";
  entity_9 = NULL;
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_9, 'O', 17-1);
  entity_9[17-1]='';
  strcpy(entity_8, entity_9);
}