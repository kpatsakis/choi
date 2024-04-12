void fun()
{
  int entity_3 = 21;
  int entity_4 = 40;
  entity_3 = 94;
  char* entity_9;
  char entity_2[41] = "";
  entity_2 = NULL;
  memset(entity_2, 'V', 41-1);
  entity_2[41-1]='';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[entity_3-1]='';
  strcpy(entity_9, entity_2);
}