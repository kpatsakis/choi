void fun()
{
  char entity_0[74] = "";
  char* entity_6;
  memset(entity_0, 'f', 74-1);
  entity_0[74-1]='0';
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_0, 74*sizeof(char));
}