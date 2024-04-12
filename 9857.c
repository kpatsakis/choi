void fun()
{
  int entity_1 = 11;
  char* entity_9;
  char entity_6[67] = "";
  entity_6 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_6, 'B', 67-1);
  entity_6[67-1]='';
  entity_1 = 33;
  strcpy(entity_9, entity_6);
}