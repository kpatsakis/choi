void fun()
{
  char* entity_8;
  char entity_2[85] = "";
  entity_8 = (char*)malloc(61*sizeof(char));
  entity_8[0]='0';
  memset(entity_2, 'o', 85-1);
  entity_2[85-1]='0';
  memcpy(entity_8, entity_2, 85*sizeof(char));
}