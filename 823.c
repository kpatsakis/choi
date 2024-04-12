void fun()
{
  char entity_8[87] = "";
  entity_8 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  memset(entity_8, 'L', 87-1);
  entity_8[87-1]='';
  memcpy(entity_4, entity_8, 87*sizeof(char));
}