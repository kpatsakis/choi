void fun()
{
  int entity_2 = 88;
  char* entity_3;
  char entity_8[15] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(entity_2*sizeof(char));
  entity_3[entity_2-1]='';
  memset(entity_8, 'j', 15-1);
  entity_8[15-1]='';
  memcpy(entity_3, entity_8, 15*sizeof(char));
}