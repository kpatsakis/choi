void fun()
{
  char entity_5[32] = "";
  entity_5 = NULL;
  char* entity_3;
  char entity_8[29] = "";
  entity_8 = NULL;
  memset(entity_5, 'X', 32-1);
  entity_5[32-1]='';
  entity_3 = (char*)malloc(52*sizeof(char));
  entity_3[52-1]='';
  memset(entity_8, 'a', 29-1);
  entity_8[29-1]='';
  memcpy(entity_3, entity_8, 29*sizeof(char));
}