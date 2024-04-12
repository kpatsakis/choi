void fun()
{
  char entity_2[33] = "";
  char* entity_6;
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'Z', 33-1);
  entity_2[33-1]='0';
  memcpy(entity_6, entity_2, 33*sizeof(char));
}