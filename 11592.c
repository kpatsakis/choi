void fun()
{
  char* entity_3;
  char entity_2[83] = "";
  char* entity_7;
  entity_7 = (char*)malloc(56*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'u', 83-1);
  entity_2[83-1]='0';
  entity_3 = (char*)malloc(89*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_7, entity_2);
}