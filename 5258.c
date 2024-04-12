void fun()
{
  int entity_7 = 81;
  char entity_6[6] = "";
  entity_6 = NULL;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_4;
  char* entity_3;
  entity_3 = (char*)malloc(63*sizeof(char));
  entity_3[63-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  memset(entity_0, 'o', entity_7-1);
  entity_0[entity_7-1]='';
  memset(entity_6, 'S', 6-1);
  entity_6[6-1]='';
  strcpy(entity_3, entity_0);
}