void fun()
{
  int entity_5 = 19;
  char entity_1[19] = "";
  entity_1 = NULL;
  char* entity_0;
  char* entity_3;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'j', entity_5-1);
  entity_7[entity_5-1]='';
  entity_0 = (char*)malloc(98*sizeof(char));
  entity_0[98-1]='';
  memset(entity_1, 'j', 19-1);
  entity_1[19-1]='';
  entity_3 = (char*)malloc(97*sizeof(char));
  entity_3[97-1]='';
  memcpy(entity_3, entity_7, entity_5*sizeof(char));
}