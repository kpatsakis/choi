void fun()
{
  int entity_4 = 48;
  int entity_3 = 76;
  entity_4 = 24;
  char* entity_1;
  char entity_0[14] = "";
  char* entity_6;
  char* entity_9;
  entity_1 = (char*)malloc(entity_4*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(5*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(6*sizeof(char));
  entity_6[0]='0';
  memset(entity_0, 's', 14-1);
  entity_0[14-1]='0';
  strcpy(entity_1, entity_0);
}