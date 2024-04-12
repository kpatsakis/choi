void fun()
{
  char entity_3[87] = "";
  char entity_5[96] = "";
  char* entity_1;
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'V', 96-1);
  entity_5[96-1]='0';
  memset(entity_3, 'z', 87-1);
  entity_3[87-1]='0';
  memcpy(entity_1, entity_3, 87*sizeof(char));
}