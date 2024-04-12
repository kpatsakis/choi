void fun()
{
  char entity_3[68] = "";
  char entity_6[49] = "";
  char* entity_5;
  entity_5 = (char*)malloc(83*sizeof(char));
  entity_5[0]='0';
  memset(entity_3, 'h', 68-1);
  entity_3[68-1]='0';
  memset(entity_6, 'w', 49-1);
  entity_6[49-1]='0';
  strcpy(entity_5, entity_3);
}