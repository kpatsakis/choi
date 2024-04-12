void fun()
{
  char* entity_4;
  char entity_8[80] = "";
  entity_8 = NULL;
  char entity_6[87] = "";
  entity_6 = NULL;
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[13-1]='';
  memset(entity_8, 'v', 80-1);
  entity_8[80-1]='';
  memset(entity_6, 'q', 87-1);
  entity_6[87-1]='';
  entity_6[21] = 'Q';
}