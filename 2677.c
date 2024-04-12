void fun()
{
  int entity_5 = 89;
  entity_5 = 43;
  char* entity_3;
  char entity_4 = 'I';
  char entity_7[74] = "";
  entity_7 = NULL;
  char entity_0[entity_5] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_7, 'R', 74-1);
  entity_7[74-1]='';
  memset(entity_0, 'R', entity_5-1);
  entity_0[entity_5-1]='';
  memcpy(entity_3, entity_0, entity_5*sizeof(char));
}