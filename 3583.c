void fun()
{
  int entity_9 = 23;
  int entity_3 = 66;
  char* entity_5;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  char entity_7[73] = "";
  entity_7 = NULL;
  memset(entity_7, 'e', 73-1);
  entity_7[73-1]='';
  memset(entity_1, 'h', entity_3-1);
  entity_1[entity_3-1]='';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  entity_3 = 52;
  memcpy(entity_5, entity_1, entity_3*sizeof(char));
}