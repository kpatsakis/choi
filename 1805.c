void fun()
{
  int entity_6 = 93;
  char entity_0[74] = "";
  entity_0 = NULL;
  char* entity_5;
  memset(entity_0, 'X', 74-1);
  entity_0[74-1]='';
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[entity_6-1]='';
  memcpy(entity_5, entity_0, 74*sizeof(char));
}