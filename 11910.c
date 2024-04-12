void fun()
{
  char* entity_8;
  char* entity_2;
  char entity_6[62] = "";
  entity_8 = (char*)malloc(31*sizeof(char));
  entity_8[0]='0';
  memset(entity_6, 'T', 62-1);
  entity_6[62-1]='0';
  entity_2 = (char*)malloc(51*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}