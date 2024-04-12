void fun()
{
  char* entity_1;
  char* entity_5;
  char entity_3[55] = "";
  char entity_2[68] = "";
  memset(entity_3, 'O', 55-1);
  entity_3[55-1]='0';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[0]='0';
  memset(entity_2, 'b', 68-1);
  entity_2[68-1]='0';
  entity_5 = (char*)malloc(82*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_2, 68*sizeof(char));
}