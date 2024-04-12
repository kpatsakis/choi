void fun()
{
  int entity_1 = 53;
  char entity_9[71] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[entity_1-1]='';
  memset(entity_9, 'a', 71-1);
  entity_9[71-1]='';
  strcpy(entity_3, entity_9);
}