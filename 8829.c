void fun()
{
  int entity_1 = 53;
  char entity_0 = 'N';
  char entity_6 = 'j';
  char entity_5[56] = "";
  entity_5 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(41*sizeof(char));
  entity_8[41-1]='';
  memset(entity_5, 'T', 56-1);
  entity_5[56-1]='';
  memcpy(entity_8, entity_5, 56*sizeof(char));
}