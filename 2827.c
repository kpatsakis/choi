void fun()
{
  int entity_6 = 98;
  int entity_4 = 78;
  char entity_8[27] = "";
  entity_8 = NULL;
  char entity_1[64] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'h', 64-1);
  entity_1[64-1]='';
  memset(entity_8, 'V', 27-1);
  entity_8[27-1]='';
  entity_3 = (char*)malloc(58*sizeof(char));
  entity_3[58-1]='';
  memcpy(entity_3, entity_8, 27*sizeof(char));
}