void fun()
{
  char* entity_4;
  char entity_2[62] = "";
  memset(entity_2, 'p', 62-1);
  entity_2[62-1]='0';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  memcpy(entity_4, entity_2, 62*sizeof(char));
}