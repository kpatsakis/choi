void fun()
{
  int entity_9 = 47;
  int entity_5 = 63;
  entity_9 = 43;
  char entity_2[5] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_9*sizeof(char));
  entity_1[entity_9-1]='';
  memset(entity_2, 'V', 5-1);
  entity_2[5-1]='';
  strcpy(entity_1, entity_2);
}