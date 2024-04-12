void fun()
{
  int entity_3 = 84;
  int entity_7 = 9;
  char entity_0[63] = "";
  entity_0 = NULL;
  char entity_2[36] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'i', 36-1);
  entity_2[36-1]='';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[entity_3-1]='';
  memset(entity_0, 'l', 63-1);
  entity_0[63-1]='';
  strcpy(entity_6, entity_2);
}