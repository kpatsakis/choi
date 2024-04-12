void fun()
{
  int entity_9 = 29;
  entity_9 = 77;
  char* entity_8;
  char entity_5 = 'r';
  char entity_7 = 'o';
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  memset(entity_6, 'Q', entity_9-1);
  entity_6[entity_9-1]='';
  entity_8 = (char*)malloc(1*sizeof(char));
  entity_8[1-1]='';
  memcpy(entity_8, entity_6, entity_9*sizeof(char));
}