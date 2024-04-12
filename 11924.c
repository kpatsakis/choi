void fun()
{
  char* entity_2;
  char entity_6[41] = "";
  entity_2 = (char*)malloc(43*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'e', 41-1);
  entity_6[41-1]='0';
  memcpy(entity_2, entity_6, 41*sizeof(char));
}