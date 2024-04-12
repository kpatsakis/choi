void fun()
{
  int entity_7 = 22;
  char entity_3[37] = "";
  char entity_2[85] = "";
  char* entity_5;
  entity_5 = (char*)malloc(66*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'q', 85-1);
  entity_2[85-1]='0';
  memset(entity_3, 'z', 37-1);
  entity_3[37-1]='0';
  memcpy(entity_5, entity_2, 85*sizeof(char));
}