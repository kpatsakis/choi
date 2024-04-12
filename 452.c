void fun()
{
  int entity_5 = 86;
  char entity_6 = 'b';
  char* entity_2;
  char entity_3[86] = "";
  entity_3 = NULL;
  char entity_8[54] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_5*sizeof(char));
  entity_2[entity_5-1]='';
  memset(entity_3, 'k', 86-1);
  entity_3[86-1]='';
  memset(entity_8, 'c', 54-1);
  entity_8[54-1]='';
  memcpy(entity_2, entity_8, 54*sizeof(char));
}