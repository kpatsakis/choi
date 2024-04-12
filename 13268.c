void fun()
{
  int entity_6 = 71;
  entity_6 = 82;
  char* entity_7;
  char entity_0[17] = "";
  memset(entity_0, 'R', 17-1);
  entity_0[17-1]='0';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_0, 17*sizeof(char));
}