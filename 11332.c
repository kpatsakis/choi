void fun()
{
  char* entity_4;
  char entity_8 = 'e';
  char entity_3[37] = "";
  entity_4 = (char*)malloc(13*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'd', 37-1);
  entity_3[37-1]='0';
  memcpy(entity_4, entity_3, 37*sizeof(char));
}