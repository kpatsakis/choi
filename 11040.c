void fun()
{
  char* entity_6;
  char entity_7[74] = "";
  memset(entity_7, 'G', 74-1);
  entity_7[74-1]='0';
  entity_6 = (char*)malloc(41*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_7, 74*sizeof(char));
}