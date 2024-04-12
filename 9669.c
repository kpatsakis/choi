void fun()
{
  int entity_7 = 50;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_3;
  memset(entity_0, 't', entity_7-1);
  entity_0[entity_7-1]='';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[65-1]='';
  memcpy(entity_3, entity_0, entity_7*sizeof(char));
}