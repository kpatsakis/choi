void fun()
{
  char* entity_1;
  char entity_8[95] = "";
  entity_8 = NULL;
  memset(entity_8, 'c', 95-1);
  entity_8[95-1]='';
  entity_1 = (char*)malloc(57*sizeof(char));
  entity_1[57-1]='';
  memcpy(entity_1, entity_8, 95*sizeof(char));
}