void fun()
{
  int entity_4 = 26;
  char* entity_6;
  char entity_2[64] = "";
  char* entity_5;
  char entity_8 = 'R';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(94*sizeof(char));
  entity_5[0]='0';
  memset(entity_2, 'j', 64-1);
  entity_2[64-1]='0';
  strcpy(entity_6, entity_2);
}