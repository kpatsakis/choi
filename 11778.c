void fun()
{
  char entity_2[97] = "";
  char* entity_1;
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 's', 97-1);
  entity_2[97-1]='0';
  memcpy(entity_1, entity_2, 97*sizeof(char));
}