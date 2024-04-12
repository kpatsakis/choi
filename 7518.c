void fun()
{
  int entity_6 = 86;
  char* entity_4;
  char entity_1[7] = "";
  entity_1 = NULL;
  char entity_7[12] = "";
  entity_7 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_1, 'N', 7-1);
  entity_1[7-1]='';
  memset(entity_7, 't', 12-1);
  entity_7[12-1]='';
  entity_6 = 58;
  memcpy(entity_4, entity_1, 7*sizeof(char));
}