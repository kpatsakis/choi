void fun()
{
  int entity_6 = 6;
  int entity_4 = 32;
  entity_4 = 77;
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  char* entity_9;
  memset(entity_7, 'q', entity_4-1);
  entity_7[entity_4-1]='';
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  memcpy(entity_9, entity_7, entity_4*sizeof(char));
}