void fun()
{
  char entity_3[5] = "";
  char* entity_8;
  entity_8 = (char*)malloc(57*sizeof(char));
  entity_8[0]='0';
  memset(entity_3, 's', 5-1);
  entity_3[5-1]='0';
  strcpy(entity_8, entity_3);
}