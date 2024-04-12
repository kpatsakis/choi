void fun()
{
  int entity_6 = 51;
  char entity_8 = 'B';
  char* entity_5;
  char* entity_1;
  char entity_7[entity_6] = "";
  memset(entity_7, 'L', entity_6-1);
  entity_7[entity_6-1]='0';
  entity_5 = (char*)malloc(70*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(4*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_5, entity_7);
}