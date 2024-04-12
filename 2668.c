void fun()
{
  int entity_3 = 28;
  char entity_9 = 'q';
  char entity_1[93] = "";
  entity_1 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_1, 'X', 93-1);
  entity_1[93-1]='';
  memcpy(entity_6, entity_1, 93*sizeof(char));
}