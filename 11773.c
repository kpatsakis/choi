void fun()
{
  char entity_2[94] = "";
  char* entity_4;
  char* entity_7;
  entity_4 = (char*)malloc(29*sizeof(char));
  entity_4[0]='0';
  entity_7 = (char*)malloc(76*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'X', 94-1);
  entity_2[94-1]='0';
  strcpy(entity_7, entity_2);
}