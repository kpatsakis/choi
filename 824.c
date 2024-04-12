void fun()
{
  int entity_6 = 55;
  char entity_3[41] = "";
  entity_3 = NULL;
  char* entity_0;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  memset(entity_3, 'P', 41-1);
  entity_3[41-1]='';
  memset(entity_7, 'k', entity_6-1);
  entity_7[entity_6-1]='';
  memcpy(entity_0, entity_7, entity_6*sizeof(char));
}