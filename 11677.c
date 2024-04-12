void fun()
{
  char entity_5[68] = "";
  char* entity_4;
  char entity_3 = 'I';
  entity_4 = (char*)malloc(48*sizeof(char));
  entity_4[0]='0';
  memset(entity_5, 'b', 68-1);
  entity_5[68-1]='0';
  strcpy(entity_4, entity_5);
}