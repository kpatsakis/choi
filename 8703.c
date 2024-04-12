void fun()
{
  int entity_6 = 88;
  int entity_7 = 77;
  char* entity_1;
  char entity_9[76] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_9, 'j', 76-1);
  entity_9[76-1]='';
  memcpy(entity_1, entity_9, 76*sizeof(char));
}