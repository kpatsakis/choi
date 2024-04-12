void fun()
{
  int entity_2 = 26;
  int entity_0 = 81;
  entity_0 = 96;
  char entity_7[11] = "";
  char* entity_1;
  char* entity_4;
  memset(entity_7, 'T', 11-1);
  entity_7[11-1]='0';
  entity_1 = (char*)malloc(82*sizeof(char));
  entity_1[0]='0';
  entity_4 = (char*)malloc(entity_0*sizeof(char));
  entity_4[0]='0';
  strcpy(entity_4, entity_7);
}