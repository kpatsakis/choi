void fun()
{
  char entity_5[83] = "";
  entity_5 = NULL;
  char entity_2 = 'Q';
  char* entity_4;
  memset(entity_5, 'f', 83-1);
  entity_5[83-1]='';
  entity_4 = (char*)malloc(90*sizeof(char));
  entity_4[90-1]='';
  memcpy(entity_4, entity_5, 83*sizeof(char));
}