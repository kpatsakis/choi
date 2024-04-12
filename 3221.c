void fun()
{
  int entity_3 = 14;
  entity_3 = 89;
  char* entity_0;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_7 = 'v';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_2, 't', 36-1);
  entity_2[36-1]='';
  memcpy(entity_0, entity_2, 36*sizeof(char));
}