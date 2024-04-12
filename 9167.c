void fun()
{
  char entity_7[27] = "";
  entity_7 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(67*sizeof(char));
  entity_0[67-1]='';
  memset(entity_7, 'a', 27-1);
  entity_7[27-1]='';
  memcpy(entity_0, entity_7, 27*sizeof(char));
}