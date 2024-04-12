void fun()
{
  int entity_8 = 80;
  int entity_4 = 44;
  int entity_7 = 34;
  char* entity_6;
  char entity_9[93] = "";
  entity_9 = NULL;
  memset(entity_9, 'D', 93-1);
  entity_9[93-1]='';
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[entity_7-1]='';
  entity_7 = 37;
  memcpy(entity_6, entity_9, 93*sizeof(char));
}