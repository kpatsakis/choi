void fun()
{
  int entity_5 = 67;
  int entity_7 = 43;
  char entity_0[67] = "";
  char* entity_4;
  char entity_3[66] = "";
  entity_4 = (char*)malloc(entity_7*sizeof(char));
  entity_4[0]='0';
  memset(entity_3, 'S', 66-1);
  entity_3[66-1]='0';
  memset(entity_0, 'f', 67-1);
  entity_0[67-1]='0';
  memcpy(entity_4, entity_3, 66*sizeof(char));
}