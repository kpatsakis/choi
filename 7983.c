void fun()
{
  int entity_6 = 89;
  char* entity_7;
  char entity_0[36] = "";
  entity_0 = NULL;
  char entity_5 = 'W';
  char entity_3 = 'N';
  memset(entity_0, 'K', 36-1);
  entity_0[36-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_0, 36*sizeof(char));
}