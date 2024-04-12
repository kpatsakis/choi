void fun()
{
  int entity_5 = 66;
  char* entity_4;
  char entity_9[85] = "";
  entity_9 = NULL;
  char entity_1 = 'n';
  memset(entity_9, 'c', 85-1);
  entity_9[85-1]='';
  entity_4 = (char*)malloc(entity_5*sizeof(char));
  entity_4[entity_5-1]='';
  memcpy(entity_4, entity_9, 85*sizeof(char));
}