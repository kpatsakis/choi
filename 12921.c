void fun()
{
  int entity_2 = 55;
  char entity_7[47] = "";
  char* entity_5;
  char* entity_1;
  char entity_6[entity_2] = "";
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'b', 47-1);
  entity_7[47-1]='0';
  memset(entity_6, 'v', entity_2-1);
  entity_6[entity_2-1]='0';
  entity_5 = (char*)malloc(17*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_1, entity_6);
}