void fun()
{
  char entity_9 = 'Q';
  char entity_1 = 'e';
  char* entity_4;
  char entity_3[13] = "";
  entity_3 = NULL;
  entity_4 = (char*)malloc(37*sizeof(char));
  entity_4[37-1]='';
  memset(entity_3, 'f', 13-1);
  entity_3[13-1]='';
  memcpy(entity_4, entity_3, 13*sizeof(char));
}