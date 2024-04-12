void fun()
{
  char* entity_4;
  char entity_2[40] = "";
  memset(entity_2, 'V', 40-1);
  entity_2[40-1]='0';
  entity_4 = (char*)malloc(18*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 40*sizeof(char));
}