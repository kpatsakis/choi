void fun()
{
  int entity_7 = 43;
  int entity_1 = 26;
  char entity_9[42] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 'p', 42-1);
  entity_9[42-1]='';
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memcpy(entity_6, entity_9, 42*sizeof(char));
}