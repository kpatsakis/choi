void fun()
{
  int entity_8 = 4;
  char* entity_4;
  char entity_0[26] = "";
  entity_0 = NULL;
  memset(entity_0, 'Y', 26-1);
  entity_0[26-1]='';
  entity_4 = (char*)malloc(80*sizeof(char));
  entity_4[80-1]='';
  memcpy(entity_4, entity_0, 26*sizeof(char));
}