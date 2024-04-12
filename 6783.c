void fun()
{
  int entity_3 = 69;
  char* entity_9;
  char entity_4[17] = "";
  entity_4 = NULL;
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  memset(entity_4, 'R', 17-1);
  entity_4[17-1]='';
  strcpy(entity_9, entity_4);
}