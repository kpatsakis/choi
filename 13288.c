void fun()
{
  int entity_2 = 65;
  int entity_3 = 86;
  entity_3 = 16;
  char entity_5 = 'a';
  char entity_7[50] = "";
  char* entity_1;
  char* entity_0;
  entity_0 = (char*)malloc(21*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'J', 50-1);
  entity_7[50-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_7, 50*sizeof(char));
}