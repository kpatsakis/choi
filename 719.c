void fun()
{
  int entity_4 = 96;
  entity_4 = 42;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char* entity_7;
  memset(entity_9, 'r', entity_4-1);
  entity_9[entity_4-1]='';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memcpy(entity_7, entity_9, entity_4*sizeof(char));
}