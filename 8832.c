void fun()
{
  int entity_1 = 59;
  char* entity_3;
  char entity_5[99] = "";
  entity_5 = NULL;
  char entity_8[54] = "";
  entity_8 = NULL;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[59-1]='';
  memset(entity_8, 'h', 54-1);
  entity_8[54-1]='';
  memset(entity_5, 'a', 99-1);
  entity_5[99-1]='';
  memcpy(entity_3, entity_8, 54*sizeof(char));
}