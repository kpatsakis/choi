void fun()
{
  char entity_9[16] = "";
  char* entity_5;
  char* entity_2;
  char entity_8[48] = "";
  memset(entity_8, 'A', 48-1);
  entity_8[48-1]='0';
  entity_2 = (char*)malloc(49*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'V', 16-1);
  entity_9[16-1]='0';
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_2, entity_9);
}