void fun()
{
  int entity_2 = 2;
  char entity_6[43] = "";
  entity_6 = NULL;
  char entity_3[18] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_0 = 'n';
  memset(entity_6, 'R', 43-1);
  entity_6[43-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  memset(entity_3, 'h', 18-1);
  entity_3[18-1]='';
  entity_2 = 92;
  entity_6[entity_2] = 'Q';
}