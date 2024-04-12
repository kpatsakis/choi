void fun()
{
  char* entity_4;
  char entity_3[91] = "";
  entity_3 = NULL;
  char entity_1 = 'Q';
  char* entity_5;
  memset(entity_3, 'y', 91-1);
  entity_3[91-1]='';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[13-1]='';
  entity_4 = (char*)malloc(83*sizeof(char));
  entity_4[83-1]='';
  memcpy(entity_5, entity_3, 91*sizeof(char));
}