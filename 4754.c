void fun()
{
  int entity_6 = 32;
  char* entity_3;
  char entity_4[60] = "";
  entity_4 = NULL;
  char entity_8[2] = "";
  entity_8 = NULL;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[29-1]='';
  memset(entity_4, 's', 60-1);
  entity_4[60-1]='';
  memset(entity_7, 'A', entity_6-1);
  entity_7[entity_6-1]='';
  memset(entity_8, 'V', 2-1);
  entity_8[2-1]='';
  entity_7[94] = 'Q';
}