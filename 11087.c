void fun()
{
  char entity_2[74] = "";
  char* entity_6;
  entity_6 = (char*)malloc(98*sizeof(char));
  entity_6[0]='0';
  memset(entity_2, 'K', 74-1);
  entity_2[74-1]='0';
  memcpy(entity_6, entity_2, 74*sizeof(char));
}