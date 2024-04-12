void fun()
{
  int entity_7 = 44;
  char* entity_8;
  char* entity_5;
  char entity_9[entity_7] = "";
  entity_9 = NULL;
  char entity_3 = 'v';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[26-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  memset(entity_9, 'U', entity_7-1);
  entity_9[entity_7-1]='';
  memcpy(entity_5, entity_9, entity_7*sizeof(char));
}