void fun()
{
  char entity_1 = 'l';
  char entity_6[22] = "";
  entity_6 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[10-1]='';
  memset(entity_6, 'h', 22-1);
  entity_6[22-1]='';
  memcpy(entity_4, entity_6, 22*sizeof(char));
}