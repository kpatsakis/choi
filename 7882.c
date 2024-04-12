void fun()
{
  int entity_5 = 0;
  char entity_4[67] = "";
  entity_4 = NULL;
  char* entity_0;
  memset(entity_4, 'Y', 67-1);
  entity_4[67-1]='';
  entity_0 = (char*)malloc(96*sizeof(char));
  entity_0[96-1]='';
  memcpy(entity_0, entity_4, 67*sizeof(char));
}