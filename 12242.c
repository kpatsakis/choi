void fun()
{
  int entity_8 = 35;
  int entity_3 = 26;
  char* entity_1;
  char entity_5[58] = "";
  char* entity_6;
  memset(entity_5, 'I', 58-1);
  entity_5[58-1]='0';
  entity_1 = (char*)malloc(50*sizeof(char));
  entity_1[0]='0';
  entity_6 = (char*)malloc(entity_3*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_5, 58*sizeof(char));
}