void fun()
{
  char* entity_3;
  char entity_7[88] = "";
  memset(entity_7, 'X', 88-1);
  entity_7[88-1]='0';
  entity_3 = (char*)malloc(19*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_7, 88*sizeof(char));
}