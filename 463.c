void fun()
{
  char* entity_7;
  char entity_0[75] = "";
  entity_0 = NULL;
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memset(entity_0, 'W', 75-1);
  entity_0[75-1]='';
  memcpy(entity_7, entity_0, 75*sizeof(char));
}