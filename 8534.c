void fun()
{
  int entity_0 = 45;
  char* entity_8;
  char entity_1[30] = "";
  entity_1 = NULL;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_7[19] = "";
  entity_7 = NULL;
  char entity_4 = 'F';
  memset(entity_1, 'R', 30-1);
  entity_1[30-1]='';
  memset(entity_7, 'j', 19-1);
  entity_7[19-1]='';
  memset(entity_3, 'g', entity_0-1);
  entity_3[entity_0-1]='';
  entity_8 = (char*)malloc(10*sizeof(char));
  entity_8[10-1]='';
  memcpy(entity_8, entity_3, entity_0*sizeof(char));
}