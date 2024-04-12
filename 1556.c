void fun()
{
  int entity_3 = 39;
  char entity_8[61] = "";
  entity_8 = NULL;
  char* entity_1;
  char entity_0[entity_3] = "";
  entity_0 = NULL;
  char entity_2 = 'F';
  char entity_6 = 'y';
  memset(entity_8, 'o', 61-1);
  entity_8[61-1]='';
  entity_1 = (char*)malloc(33*sizeof(char));
  entity_1[33-1]='';
  memset(entity_0, 'P', entity_3-1);
  entity_0[entity_3-1]='';
  memcpy(entity_1, entity_0, entity_3*sizeof(char));
}