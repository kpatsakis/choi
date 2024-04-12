void fun()
{
  int entity_9 = 54;
  char* entity_7;
  char entity_3[81] = "";
  entity_3 = NULL;
  memset(entity_3, 'm', 81-1);
  entity_3[81-1]='';
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  entity_9 = 22;
  memcpy(entity_7, entity_3, 81*sizeof(char));
}