void fun()
{
  char* entity_1;
  char entity_7[97] = "";
  memset(entity_7, 'Q', 97-1);
  entity_7[97-1]='0';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[0]='0';
  entity_7[47] = 'U';
}