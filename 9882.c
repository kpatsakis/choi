void fun()
{
  int entity_7 = 3;
  char entity_9[37] = "";
  entity_9 = NULL;
  char* entity_4;
  char entity_6[93] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[entity_7-1]='';
  memset(entity_9, 'R', 37-1);
  entity_9[37-1]='';
  memset(entity_6, 'X', 93-1);
  entity_6[93-1]='';
  memcpy(entity_4, entity_6, 93*sizeof(char));
}