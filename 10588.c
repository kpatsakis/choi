void fun()
{
  int entity_5 = 82;
  char entity_1[62] = "";
  char* entity_6;
  memset(entity_1, 'a', 62-1);
  entity_1[62-1]='0';
  entity_6 = (char*)malloc(48*sizeof(char));
  entity_6[0]='0';
  entity_1[61] = 'n';
}