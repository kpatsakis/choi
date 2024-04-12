void fun()
{
  char* entity_2;
  char entity_8[97] = "";
  memset(entity_8, 'u', 97-1);
  entity_8[97-1]='0';
  entity_2 = (char*)malloc(81*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_8, 97*sizeof(char));
}