void fun()
{
  char entity_6[28] = "";
  char* entity_3;
  char entity_2[47] = "";
  memset(entity_6, 'h', 28-1);
  entity_6[28-1]='0';
  entity_3 = (char*)malloc(59*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'D', 47-1);
  entity_2[47-1]='0';
  strcpy(entity_3, entity_6);
}