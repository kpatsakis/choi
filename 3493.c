void fun()
{
  char* entity_3;
  char entity_5[63] = "";
  entity_5 = NULL;
  entity_3 = (char*)malloc(40*sizeof(char));
  entity_3[40-1]='';
  memset(entity_5, 'u', 63-1);
  entity_5[63-1]='';
  memcpy(entity_3, entity_5, 63*sizeof(char));
}