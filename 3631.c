void fun()
{
  int entity_5 = 25;
  char entity_7 = 'K';
  char entity_9[entity_5] = "";
  entity_9 = NULL;
  char* entity_2;
  memset(entity_9, 'L', entity_5-1);
  entity_9[entity_5-1]='';
  entity_2 = (char*)malloc(37*sizeof(char));
  entity_2[37-1]='';
  strcpy(entity_2, entity_9);
}