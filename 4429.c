void fun()
{
  int entity_7 = 98;
  int entity_2 = 2;
  char entity_9[28] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'I', 28-1);
  entity_9[28-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  strcpy(entity_6, entity_9);
}