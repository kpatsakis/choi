void fun()
{
  char entity_8[72] = "";
  entity_8 = NULL;
  char entity_6[83] = "";
  entity_6 = NULL;
  char* entity_7;
  memset(entity_8, 'w', 72-1);
  entity_8[72-1]='';
  memset(entity_6, 'X', 83-1);
  entity_6[83-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  memcpy(entity_7, entity_8, 72*sizeof(char));
}