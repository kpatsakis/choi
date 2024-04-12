void fun()
{
  int entity_1 = 97;
  entity_1 = 74;
  char entity_9[2] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_9, 'G', 2-1);
  entity_9[2-1]='';
  strcpy(entity_6, entity_9);
}