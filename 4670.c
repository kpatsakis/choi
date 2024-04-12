void fun()
{
  int entity_7 = 19;
  char* entity_4;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_1, 'L', entity_7-1);
  entity_1[entity_7-1]='';
  entity_4 = (char*)malloc(26*sizeof(char));
  entity_4[26-1]='';
  memcpy(entity_4, entity_1, entity_7*sizeof(char));
}