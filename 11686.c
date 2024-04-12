void fun()
{
  char entity_2[97] = "";
  char* entity_4;
  entity_4 = (char*)malloc(1*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'K', 97-1);
  entity_2[97-1]='0';
  memcpy(entity_4, entity_2, 97*sizeof(char));
}