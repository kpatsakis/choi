void fun()
{
  char entity_4[95] = "";
  entity_4 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(70*sizeof(char));
  entity_8[70-1]='';
  memset(entity_4, 'i', 95-1);
  entity_4[95-1]='';
  memcpy(entity_8, entity_4, 95*sizeof(char));
}