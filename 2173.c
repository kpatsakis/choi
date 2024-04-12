void fun()
{
  int entity_2 = 49;
  char* entity_0;
  char entity_8[83] = "";
  entity_8 = NULL;
  entity_0 = (char*)malloc(44*sizeof(char));
  entity_0[44-1]='';
  memset(entity_8, 'H', 83-1);
  entity_8[83-1]='';
  memcpy(entity_0, entity_8, 83*sizeof(char));
}