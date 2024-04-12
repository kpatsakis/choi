void fun()
{
  int entity_5 = 43;
  char entity_7[86] = "";
  entity_7 = NULL;
  char* entity_8;
  memset(entity_7, 'E', 86-1);
  entity_7[86-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memcpy(entity_8, entity_7, 86*sizeof(char));
}