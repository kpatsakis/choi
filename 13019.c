void fun()
{
  int entity_3 = 5;
  entity_3 = 32;
  char entity_2[26] = "";
  char* entity_1;
  char* entity_8;
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'K', 26-1);
  entity_2[26-1]='0';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_2);
}