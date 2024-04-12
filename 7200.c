void fun()
{
  int entity_6 = 38;
  int entity_7 = 89;
  int entity_1 = 17;
  char entity_0 = 'p';
  char* entity_2;
  char entity_3[54] = "";
  entity_3 = NULL;
  memset(entity_3, 'G', 54-1);
  entity_3[54-1]='';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  entity_6 = 53;
  memcpy(entity_2, entity_3, 54*sizeof(char));
}