void fun()
{
  char* entity_3;
  char entity_2[94] = "";
  char entity_1[30] = "";
  memset(entity_2, 'X', 94-1);
  entity_2[94-1]='0';
  memset(entity_1, 'J', 30-1);
  entity_1[30-1]='0';
  entity_3 = (char*)malloc(29*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_2, 94*sizeof(char));
}