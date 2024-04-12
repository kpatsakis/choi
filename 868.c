void fun()
{
  char entity_6[27] = "";
  entity_6 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(81*sizeof(char));
  entity_5[81-1]='';
  memset(entity_6, 'O', 27-1);
  entity_6[27-1]='';
  memcpy(entity_5, entity_6, 27*sizeof(char));
}