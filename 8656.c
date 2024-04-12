void fun()
{
  int entity_1 = 9;
  int entity_2 = 69;
  char entity_6[63] = "";
  entity_6 = NULL;
  char entity_5 = 'd';
  char* entity_0;
  char entity_3[entity_2] = "";
  entity_3 = NULL;
  memset(entity_6, 'Q', 63-1);
  entity_6[63-1]='';
  entity_0 = (char*)malloc(68*sizeof(char));
  entity_0[68-1]='';
  memset(entity_3, 'R', entity_2-1);
  entity_3[entity_2-1]='';
  memcpy(entity_0, entity_3, entity_2*sizeof(char));
}