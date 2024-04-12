void fun()
{
  int entity_9 = 98;
  int entity_3 = 1;
  char* entity_0;
  char entity_7[entity_3] = "";
  entity_7 = NULL;
  memset(entity_7, 'W', entity_3-1);
  entity_7[entity_3-1]='';
  entity_0 = (char*)malloc(61*sizeof(char));
  entity_0[61-1]='';
  strcpy(entity_0, entity_7);
}