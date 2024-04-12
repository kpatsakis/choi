void fun()
{
  char entity_8[3] = "";
  char entity_4 = 'i';
  char* entity_5;
  memset(entity_8, 'D', 3-1);
  entity_8[3-1]='0';
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_8, 3*sizeof(char));
}