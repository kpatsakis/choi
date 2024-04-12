void fun()
{
  char* entity_3;
  char entity_8[24] = "";
  entity_3 = (char*)malloc(22*sizeof(char));
  entity_3[0]='0';
  memset(entity_8, 'N', 24-1);
  entity_8[24-1]='0';
  memcpy(entity_3, entity_8, 24*sizeof(char));
}