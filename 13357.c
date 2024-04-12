void fun()
{
  int entity_5 = 60;
  entity_5 = 27;
  char entity_8 = 'A';
  char* entity_1;
  char entity_6[9] = "";
  char* entity_3;
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'w', 9-1);
  entity_6[9-1]='0';
  memcpy(entity_1, entity_6, 9*sizeof(char));
}