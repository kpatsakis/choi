void fun()
{
  int entity_5 = 83;
  entity_5 = 10;
  char entity_6[35] = "";
  entity_6 = NULL;
  char entity_4[70] = "";
  entity_4 = NULL;
  char entity_0[24] = "";
  entity_0 = NULL;
  char entity_8[82] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[entity_5-1]='';
  memset(entity_0, 'G', 24-1);
  entity_0[24-1]='';
  memset(entity_4, 'T', 70-1);
  entity_4[70-1]='';
  memset(entity_8, 'C', 82-1);
  entity_8[82-1]='';
  memset(entity_6, 'A', 35-1);
  entity_6[35-1]='';
  strcpy(entity_3, entity_6);
}