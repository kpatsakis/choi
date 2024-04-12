void fun()
{
  char* entity_6;
  char entity_4 = 'a';
  char entity_2[19] = "";
  memset(entity_2, 'i', 19-1);
  entity_2[19-1]='0';
  entity_6 = (char*)malloc(1*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, 19*sizeof(char));
}