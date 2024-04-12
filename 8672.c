void fun()
{
  char entity_4[83] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_2[63] = "";
  entity_2 = NULL;
  memset(entity_4, 'M', 83-1);
  entity_4[83-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  memset(entity_2, 'r', 63-1);
  entity_2[63-1]='';
  memcpy(entity_8, entity_4, 83*sizeof(char));
}