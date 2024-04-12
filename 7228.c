void fun()
{
  char entity_8[87] = "";
  entity_8 = NULL;
  char entity_0[79] = "";
  entity_0 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(27*sizeof(char));
  entity_7[27-1]='';
  memset(entity_8, 'g', 87-1);
  entity_8[87-1]='';
  memset(entity_0, 'N', 79-1);
  entity_0[79-1]='';
  memcpy(entity_7, entity_8, 87*sizeof(char));
}