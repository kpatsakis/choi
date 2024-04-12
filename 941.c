void fun()
{
  char* entity_7;
  char entity_6[23] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', 23-1);
  entity_6[23-1]='';
  entity_7 = (char*)malloc(58*sizeof(char));
  entity_7[58-1]='';
  memcpy(entity_7, entity_6, 23*sizeof(char));
}