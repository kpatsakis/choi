void fun()
{
  char entity_8[33] = "";
  entity_8 = NULL;
  char* entity_3;
  char entity_7[37] = "";
  entity_7 = NULL;
  memset(entity_8, 'u', 33-1);
  entity_8[33-1]='';
  entity_3 = (char*)malloc(8*sizeof(char));
  entity_3[8-1]='';
  memset(entity_7, 'Z', 37-1);
  entity_7[37-1]='';
  memcpy(entity_3, entity_7, 37*sizeof(char));
}