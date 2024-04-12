void fun()
{
  int entity_2 = 47;
  int entity_7 = 49;
  entity_7 = 49;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_6[82] = "";
  entity_6 = NULL;
  memset(entity_6, 'm', 82-1);
  entity_6[82-1]='';
  memset(entity_9, 'Z', entity_7-1);
  entity_9[entity_7-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  strcpy(entity_4, entity_9);
}