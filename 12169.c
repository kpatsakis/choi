void fun()
{
  int entity_1 = 58;
  char* entity_2;
  char* entity_4;
  char entity_5[68] = "";
  char entity_3 = 'S';
  char entity_6[entity_1] = "";
  memset(entity_6, 'H', entity_1-1);
  entity_6[entity_1-1]='0';
  entity_4 = (char*)malloc(30*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[0]='0';
  memset(entity_5, 'a', 68-1);
  entity_5[68-1]='0';
  strcpy(entity_2, entity_6);
}