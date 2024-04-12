void fun()
{
  int entity_0 = 33;
  char entity_3[95] = "";
  entity_3 = NULL;
  char* entity_6;
  char entity_7[50] = "";
  entity_7 = NULL;
  memset(entity_3, 'x', 95-1);
  entity_3[95-1]='';
  entity_6 = (char*)malloc(27*sizeof(char));
  entity_6[27-1]='';
  memset(entity_7, 'X', 50-1);
  entity_7[50-1]='';
  memcpy(entity_6, entity_3, 95*sizeof(char));
}