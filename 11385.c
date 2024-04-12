void fun()
{
  char* entity_2;
  char entity_4[96] = "";
  entity_2 = (char*)malloc(83*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'y', 96-1);
  entity_4[96-1]='0';
  memcpy(entity_2, entity_4, 96*sizeof(char));
}