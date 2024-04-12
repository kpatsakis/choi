void fun()
{
  int entity_2 = 6;
  char entity_5[53] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(72*sizeof(char));
  entity_8[72-1]='';
  memset(entity_5, 'U', 53-1);
  entity_5[53-1]='';
  memcpy(entity_8, entity_5, 53*sizeof(char));
}