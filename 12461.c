void fun()
{
  int entity_0 = 26;
  int entity_3 = 84;
  char* entity_4;
  char entity_2[35] = "";
  char* entity_6;
  entity_4 = (char*)malloc(73*sizeof(char));
  entity_4[0]='0';
  memset(entity_2, 'k', 35-1);
  entity_2[35-1]='0';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_2, 35*sizeof(char));
}