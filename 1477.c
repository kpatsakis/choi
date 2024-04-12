void fun()
{
  int entity_0 = 2;
  int entity_8 = 38;
  char entity_3[38] = "";
  entity_3 = NULL;
  char* entity_5;
  char entity_4 = 'c';
  entity_5 = (char*)malloc(entity_0*sizeof(char));
  entity_5[entity_0-1]='';
  memset(entity_3, 'N', 38-1);
  entity_3[38-1]='';
  memcpy(entity_5, entity_3, 38*sizeof(char));
}