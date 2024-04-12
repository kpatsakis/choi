void fun()
{
  char* entity_2;
  char entity_6[38] = "";
  memset(entity_6, 'K', 38-1);
  entity_6[38-1]='0';
  entity_2 = (char*)malloc(73*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_6, 38*sizeof(char));
}