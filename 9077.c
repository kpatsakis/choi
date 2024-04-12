void fun()
{
  int entity_4 = 58;
  char entity_9[51] = "";
  entity_9 = NULL;
  char entity_2[17] = "";
  entity_2 = NULL;
  char* entity_8;
  char entity_1[93] = "";
  entity_1 = NULL;
  memset(entity_1, 's', 93-1);
  entity_1[93-1]='';
  memset(entity_9, 'X', 51-1);
  entity_9[51-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  memset(entity_2, 'M', 17-1);
  entity_2[17-1]='';
  memcpy(entity_8, entity_1, 93*sizeof(char));
}