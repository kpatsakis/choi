void fun()
{
  char entity_7[95] = "";
  entity_7 = NULL;
  char entity_6 = 'V';
  char* entity_8;
  entity_8 = (char*)malloc(24*sizeof(char));
  entity_8[24-1]='';
  memset(entity_7, 't', 95-1);
  entity_7[95-1]='';
  memcpy(entity_8, entity_7, 95*sizeof(char));
}