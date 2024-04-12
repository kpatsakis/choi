void fun()
{
  int entity_3 = 1;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char* entity_6;
  memset(entity_0, 'X', entity_3-1);
  entity_0[entity_3-1]='';
  entity_6 = (char*)malloc(56*sizeof(char));
  entity_6[56-1]='';
  entity_3 = 8;
  memcpy(entity_6, entity_0, entity_3*sizeof(char));
}