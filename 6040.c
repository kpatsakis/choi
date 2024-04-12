void fun()
{
  int entity_5 = 89;
  int entity_3 = 64;
  entity_3 = 44;
  char* entity_0;
  char entity_2[90] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 90-1);
  entity_2[90-1]='';
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memcpy(entity_0, entity_2, 90*sizeof(char));
}