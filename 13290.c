void fun()
{
  int entity_8 = 8;
  entity_8 = 8;
  char* entity_3;
  char entity_4[entity_8] = "";
  char entity_2[26] = "";
  char* entity_6;
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'j', 26-1);
  entity_2[26-1]='0';
  entity_6 = (char*)malloc(36*sizeof(char));
  entity_6[0]='0';
  memset(entity_4, 'C', entity_8-1);
  entity_4[entity_8-1]='0';
  strcpy(entity_3, entity_4);
}