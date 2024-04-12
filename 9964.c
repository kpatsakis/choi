void fun()
{
  int entity_7 = 46;
  char entity_6[58] = "";
  entity_6 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[entity_7-1]='';
  memset(entity_6, 'Z', 58-1);
  entity_6[58-1]='';
  memcpy(entity_9, entity_6, 58*sizeof(char));
}