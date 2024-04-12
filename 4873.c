void fun()
{
  int entity_6 = 82;
  char entity_0[3] = "";
  entity_0 = NULL;
  char entity_8 = 'B';
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  char* entity_3;
  char* entity_7;
  memset(entity_4, 'z', entity_6-1);
  entity_4[entity_6-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  memset(entity_0, 'v', 3-1);
  entity_0[3-1]='';
  entity_7 = (char*)malloc(50*sizeof(char));
  entity_7[50-1]='';
  memcpy(entity_7, entity_4, entity_6*sizeof(char));
}