void fun()
{
  int entity_9 = 4;
  int entity_6 = 55;
  entity_6 = 55;
  char entity_3[entity_6] = "";
  entity_3 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[66-1]='';
  memset(entity_3, 'm', entity_6-1);
  entity_3[entity_6-1]='';
  strcpy(entity_5, entity_3);
}