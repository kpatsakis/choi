void fun()
{
  char entity_4 = 'e';
  char entity_9[96] = "";
  char* entity_8;
  char entity_3[35] = "";
  memset(entity_3, 'g', 35-1);
  entity_3[35-1]='0';
  entity_8 = (char*)malloc(90*sizeof(char));
  entity_8[0]='0';
  memset(entity_9, 'F', 96-1);
  entity_9[96-1]='0';
  strcpy(entity_8, entity_9);
}