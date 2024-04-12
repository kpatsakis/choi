void fun()
{
  char* entity_1;
  char entity_2[97] = "";
  memset(entity_2, 'r', 97-1);
  entity_2[97-1]='0';
  entity_1 = (char*)malloc(10*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_2, 97*sizeof(char));
}