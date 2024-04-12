void fun()
{
  int entity_6 = 92;
  char* entity_7;
  char entity_0[74] = "";
  entity_0 = NULL;
  memset(entity_0, 'U', 74-1);
  entity_0[74-1]='';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memcpy(entity_7, entity_0, 74*sizeof(char));
}