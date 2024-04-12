void fun()
{
  char* entity_3;
  char entity_9[46] = "";
  char entity_7 = 'z';
  memset(entity_9, 'b', 46-1);
  entity_9[46-1]='0';
  entity_3 = (char*)malloc(51*sizeof(char));
  entity_3[0]='0';
  entity_9[81] = 'Y';
}