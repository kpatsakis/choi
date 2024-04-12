void fun()
{
  int entity_5 = 69;
  char entity_7[56] = "";
  char* entity_3;
  char entity_4[56] = "";
  memset(entity_4, 'f', 56-1);
  entity_4[56-1]='0';
  memset(entity_7, 'C', 56-1);
  entity_7[56-1]='0';
  entity_3 = (char*)malloc(entity_5*sizeof(char));
  entity_3[0]='0';
  entity_5 = 16;
  strcpy(entity_3, entity_4);
}