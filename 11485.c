void fun()
{
  char entity_7[71] = "";
  char* entity_2;
  char* entity_3;
  memset(entity_7, 'l', 71-1);
  entity_7[71-1]='0';
  entity_3 = (char*)malloc(53*sizeof(char));
  entity_3[0]='0';
  entity_2 = (char*)malloc(6*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_3, entity_7, 71*sizeof(char));
}