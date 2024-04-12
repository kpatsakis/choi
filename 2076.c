void fun()
{
  char* entity_4;
  char entity_5 = 'Z';
  char entity_6 = 'N';
  char entity_7[27] = "";
  entity_7 = NULL;
  memset(entity_7, 'C', 27-1);
  entity_7[27-1]='';
  entity_4 = (char*)malloc(39*sizeof(char));
  entity_4[39-1]='';
  memcpy(entity_4, entity_7, 27*sizeof(char));
}