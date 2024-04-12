void fun()
{
  char entity_1 = 'e';
  char entity_9[31] = "";
  char* entity_6;
  char entity_3[62] = "";
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[0]='0';
  memset(entity_3, 'u', 62-1);
  entity_3[62-1]='0';
  memset(entity_9, 'f', 31-1);
  entity_9[31-1]='0';
  entity_9[21] = 'V';
}