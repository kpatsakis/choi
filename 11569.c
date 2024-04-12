void fun()
{
  char entity_3[25] = "";
  char* entity_6;
  memset(entity_3, 'M', 25-1);
  entity_3[25-1]='0';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_3, 25*sizeof(char));
}