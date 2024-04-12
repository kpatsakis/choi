void fun()
{
  int entity_7 = 78;
  int entity_0 = 78;
  char* entity_9;
  char entity_3[33] = "";
  entity_3 = NULL;
  char entity_2[83] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_2, 'x', 83-1);
  entity_2[83-1]='';
  memset(entity_3, 'c', 33-1);
  entity_3[33-1]='';
  strcpy(entity_9, entity_2);
}