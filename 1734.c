void fun()
{
  int entity_2 = 52;
  entity_2 = 31;
  char entity_6[51] = "";
  entity_6 = NULL;
  char entity_8[90] = "";
  entity_8 = NULL;
  char* entity_0;
  char* entity_3;
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(3*sizeof(char));
  entity_0[3-1]='';
  entity_3 = (char*)malloc(36*sizeof(char));
  entity_3[36-1]='';
  memset(entity_7, 'C', entity_2-1);
  entity_7[entity_2-1]='';
  memset(entity_6, 'A', 51-1);
  entity_6[51-1]='';
  memset(entity_8, 'L', 90-1);
  entity_8[90-1]='';
  memcpy(entity_3, entity_7, entity_2*sizeof(char));
}