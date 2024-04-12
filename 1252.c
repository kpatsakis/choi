void fun()
{
  char* entity_8;
  char entity_4[63] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(95*sizeof(char));
  entity_8[95-1]='';
  memset(entity_4, 'T', 63-1);
  entity_4[63-1]='';
  memcpy(entity_8, entity_4, 63*sizeof(char));
}