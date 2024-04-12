void fun()
{
  int entity_0 = 98;
  int entity_2 = 28;
  entity_0 = 98;
  char* entity_3;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', entity_0-1);
  entity_9[entity_0-1]='';
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[3-1]='';
  strcpy(entity_3, entity_9);
}