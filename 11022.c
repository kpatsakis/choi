void fun()
{
  char entity_3[26] = "";
  char* entity_2;
  char* entity_8;
  entity_2 = (char*)malloc(10*sizeof(char));
  entity_2[0]='0';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 'l', 26-1);
  entity_3[26-1]='0';
  memcpy(entity_8, entity_3, 26*sizeof(char));
}