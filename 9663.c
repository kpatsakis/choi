void fun()
{
  int entity_4 = 100;
  entity_4 = 100;
  char entity_5 = 'c';
  char* entity_2;
  char entity_0 = 'V';
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[83-1]='';
  memset(entity_9, 'd', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_2, entity_9);
}