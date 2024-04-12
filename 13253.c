void fun()
{
  int entity_1 = 10;
  entity_1 = 17;
  char* entity_3;
  char entity_5[36] = "";
  char* entity_0;
  char* entity_7;
  entity_7 = (char*)malloc(16*sizeof(char));
  entity_7[0]='0';
  memset(entity_5, 'g', 36-1);
  entity_5[36-1]='0';
  entity_0 = (char*)malloc(30*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(entity_1*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}