void fun()
{
  int entity_1 = 53;
  int entity_3 = 49;
  char entity_5[74] = "";
  entity_5 = NULL;
  char entity_2[48] = "";
  entity_2 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_5, 'a', 74-1);
  entity_5[74-1]='';
  memset(entity_2, 'U', 48-1);
  entity_2[48-1]='';
  entity_3 = 17;
  memcpy(entity_0, entity_2, 48*sizeof(char));
}