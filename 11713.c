void fun()
{
  char* entity_0;
  char* entity_3;
  char entity_4[62] = "";
  char entity_2[76] = "";
  memset(entity_4, 'z', 62-1);
  entity_4[62-1]='0';
  entity_3 = (char*)malloc(65*sizeof(char));
  entity_3[0]='0';
  entity_0 = (char*)malloc(2*sizeof(char));
  entity_0[0]='0';
  memset(entity_2, 'J', 76-1);
  entity_2[76-1]='0';
  strcpy(entity_3, entity_2);
}