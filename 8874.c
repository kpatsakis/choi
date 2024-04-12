void fun()
{
  char entity_1[95] = "";
  entity_1 = NULL;
  char* entity_0;
  entity_0 = (char*)malloc(83*sizeof(char));
  entity_0[83-1]='';
  memset(entity_1, 'h', 95-1);
  entity_1[95-1]='';
  memcpy(entity_0, entity_1, 95*sizeof(char));
}