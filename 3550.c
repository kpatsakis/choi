void fun()
{
  int entity_9 = 26;
  int entity_5 = 60;
  char entity_4[46] = "";
  entity_4 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[entity_9-1]='';
  memset(entity_4, 'X', 46-1);
  entity_4[46-1]='';
  memcpy(entity_7, entity_4, 46*sizeof(char));
}