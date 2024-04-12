void fun()
{
  char entity_6[63] = "";
  entity_6 = NULL;
  char entity_4 = 'd';
  char* entity_3;
  entity_3 = (char*)malloc(83*sizeof(char));
  entity_3[83-1]='';
  memset(entity_6, 'm', 63-1);
  entity_6[63-1]='';
  memcpy(entity_3, entity_6, 63*sizeof(char));
}