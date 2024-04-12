void fun()
{
  char entity_5[49] = "";
  entity_5 = NULL;
  char entity_8[3] = "";
  entity_8 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(61*sizeof(char));
  entity_3[61-1]='';
  memset(entity_5, 'g', 49-1);
  entity_5[49-1]='';
  memset(entity_8, 'j', 3-1);
  entity_8[3-1]='';
  memcpy(entity_3, entity_8, 3*sizeof(char));
}