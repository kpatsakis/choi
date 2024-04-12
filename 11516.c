void fun()
{
  char* entity_0;
  char entity_2[69] = "";
  char entity_7[24] = "";
  char entity_6[24] = "";
  memset(entity_6, 'j', 24-1);
  entity_6[24-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  memset(entity_7, 'x', 24-1);
  entity_7[24-1]='0';
  memset(entity_2, 'S', 69-1);
  entity_2[69-1]='0';
  strcpy(entity_0, entity_2);
}