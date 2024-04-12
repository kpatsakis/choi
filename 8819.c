void fun()
{
  int entity_5 = 82;
  char entity_2[54] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_9;
  memset(entity_2, 'y', 54-1);
  entity_2[54-1]='';
  entity_9 = (char*)malloc(59*sizeof(char));
  entity_9[59-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_5 = 57;
  memcpy(entity_0, entity_2, 54*sizeof(char));
}