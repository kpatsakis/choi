void fun()
{
  char entity_4[54] = "";
  char* entity_9;
  char entity_2[24] = "";
  char entity_3[68] = "";
  memset(entity_4, 's', 54-1);
  entity_4[54-1]='0';
  memset(entity_3, 'R', 68-1);
  entity_3[68-1]='0';
  memset(entity_2, 'H', 24-1);
  entity_2[24-1]='0';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_3, 68*sizeof(char));
}