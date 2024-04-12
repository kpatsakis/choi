void fun()
{
  int entity_3 = 28;
  char entity_9 = 'Y';
  char entity_4 = 'X';
  char entity_0[87] = "";
  char* entity_7;
  entity_7 = (char*)malloc(44*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'c', 87-1);
  entity_0[87-1]='0';
  memcpy(entity_7, entity_0, 87*sizeof(char));
}