void fun()
{
  int entity_7 = 1;
  char entity_9[17] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'i', 17-1);
  entity_9[17-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  memcpy(entity_6, entity_9, 17*sizeof(char));
}