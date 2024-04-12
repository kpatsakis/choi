void fun()
{
  char* entity_0;
  char entity_5[27] = "";
  entity_5 = NULL;
  memset(entity_5, 'B', 27-1);
  entity_5[27-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  memcpy(entity_0, entity_5, 27*sizeof(char));
}