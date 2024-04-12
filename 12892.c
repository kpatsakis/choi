void fun()
{
  int entity_3 = 54;
  char entity_5[92] = "";
  char entity_6[76] = "";
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'L', 76-1);
  entity_6[76-1]='0';
  memset(entity_5, 'Z', 92-1);
  entity_5[92-1]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_5);
}