void fun()
{
  int entity_1 = 18;
  int entity_6 = 43;
  char entity_7[87] = "";
  char* entity_5;
  char entity_3 = 'q';
  char* entity_2;
  entity_5 = (char*)malloc(entity_6*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'd', 87-1);
  entity_7[87-1]='0';
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[0]='0';
  entity_6 = 67;
  strcpy(entity_5, entity_7);
}