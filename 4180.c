void fun()
{
  int entity_1 = 69;
  char* entity_6;
  char entity_0[5] = "";
  entity_0 = NULL;
  memset(entity_0, 'G', 5-1);
  entity_0[5-1]='';
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[84-1]='';
  memcpy(entity_6, entity_0, 5*sizeof(char));
}