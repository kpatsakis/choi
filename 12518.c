void fun()
{
  int entity_6 = 62;
  int entity_5 = 11;
  char* entity_2;
  char entity_0[68] = "";
  char entity_7 = 'X';
  memset(entity_0, 'k', 68-1);
  entity_0[68-1]='0';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_0, 68*sizeof(char));
}