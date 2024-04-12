void fun()
{
  int entity_2 = 87;
  int entity_4 = 91;
  char entity_5[38] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(entity_2*sizeof(char));
  entity_8[entity_2-1]='';
  memset(entity_5, 'G', 38-1);
  entity_5[38-1]='';
  memcpy(entity_8, entity_5, 38*sizeof(char));
}