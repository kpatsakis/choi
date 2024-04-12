void fun()
{
  int entity_3 = 100;
  entity_3 = 32;
  char entity_8 = 'U';
  char* entity_2;
  char entity_0[54] = "";
  char* entity_6;
  char* entity_1;
  entity_1 = (char*)malloc(27*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'E', 54-1);
  entity_0[54-1]='0';
  entity_6 = (char*)malloc(25*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_0);
}