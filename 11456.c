void fun()
{
  char entity_8 = 'G';
  char* entity_0;
  char entity_6[40] = "";
  char* entity_2;
  entity_2 = (char*)malloc(29*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'L', 40-1);
  entity_6[40-1]='0';
  entity_0 = (char*)malloc(29*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_2, entity_6);
}