void fun()
{
  int entity_0 = 36;
  char entity_6[23] = "";
  entity_6 = NULL;
  char entity_7[86] = "";
  entity_7 = NULL;
  char entity_4[70] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_6, 'y', 23-1);
  entity_6[23-1]='';
  memset(entity_4, 'E', 70-1);
  entity_4[70-1]='';
  memset(entity_7, 'G', 86-1);
  entity_7[86-1]='';
  entity_5 = (char*)malloc(68*sizeof(char));
  entity_5[68-1]='';
  memcpy(entity_5, entity_6, 23*sizeof(char));
}