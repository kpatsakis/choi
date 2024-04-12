void fun()
{
  char* entity_4;
  char entity_2 = 'E';
  char* entity_3;
  char entity_5[16] = "";
  entity_4 = (char*)malloc(84*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'g', 16-1);
  entity_5[16-1]='0';
  entity_3 = (char*)malloc(16*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_4, entity_5);
}