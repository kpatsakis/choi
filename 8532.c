void fun()
{
  int entity_3 = 61;
  char* entity_4;
  char entity_8[5] = "";
  entity_8 = NULL;
  entity_4 = (char*)malloc(26*sizeof(char));
  entity_4[26-1]='';
  memset(entity_8, 'x', 5-1);
  entity_8[5-1]='';
  memcpy(entity_4, entity_8, 5*sizeof(char));
}