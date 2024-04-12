void fun()
{
  char* entity_5;
  char entity_7[59] = "";
  entity_7 = NULL;
  memset(entity_7, 'I', 59-1);
  entity_7[59-1]='';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[83-1]='';
  memcpy(entity_5, entity_7, 59*sizeof(char));
}