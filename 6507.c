void fun()
{
  int entity_7 = 89;
  entity_7 = 25;
  char* entity_3;
  char entity_2[81] = "";
  entity_2 = NULL;
  char entity_0[4] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[entity_7-1]='';
  memset(entity_0, 'C', 4-1);
  entity_0[4-1]='';
  memset(entity_2, 'I', 81-1);
  entity_2[81-1]='';
  memcpy(entity_3, entity_0, 4*sizeof(char));
}