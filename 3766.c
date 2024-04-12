void fun()
{
  int entity_6 = 96;
  char* entity_3;
  char entity_9[29] = "";
  entity_9 = NULL;
  memset(entity_9, 'h', 29-1);
  entity_9[29-1]='';
  entity_3 = (char*)malloc(entity_6*sizeof(char));
  entity_3[entity_6-1]='';
  strcpy(entity_3, entity_9);
}